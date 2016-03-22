// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/password_manager/core/browser/statistics_table.h"

#include <stdint.h>

#include <algorithm>
#include <limits>

#include "sql/connection.h"
#include "sql/statement.h"

namespace password_manager {
namespace {

// Convenience enum for interacting with SQL queries that use all the columns.
enum LoginTableColumns {
  COLUMN_ORIGIN_DOMAIN = 0,
  COLUMN_USERNAME,
  COLUMN_DISMISSALS,
  COLUMN_DATE,
};

}  // namespace

InteractionsStats::InteractionsStats() = default;

bool operator==(const InteractionsStats& lhs, const InteractionsStats& rhs) {
  return lhs.origin_domain == rhs.origin_domain &&
         lhs.username_value == rhs.username_value &&
         lhs.dismissal_count == rhs.dismissal_count &&
         lhs.update_time == rhs.update_time;
}

InteractionsStats* FindStatsByUsername(
    const std::vector<scoped_ptr<InteractionsStats>>& stats,
    const base::string16& username) {
  auto it =
      std::find_if(stats.begin(), stats.end(),
                   [&username](const scoped_ptr<InteractionsStats>& element) {
                     return username == element->username_value;
                   });
  return it == stats.end() ? nullptr : it->get();
}

StatisticsTable::StatisticsTable() : db_(nullptr) {
}

StatisticsTable::~StatisticsTable() = default;

void StatisticsTable::Init(sql::Connection* db) {
  db_ = db;
}

bool StatisticsTable::CreateTableIfNecessary() {
  if (!db_->DoesTableExist("stats")) {
    const char query[] =
        "CREATE TABLE stats ("
        "origin_domain VARCHAR NOT NULL, "
        "username_value VARCHAR, "
        "dismissal_count INTEGER, "
        "update_time INTEGER NOT NULL, "
        "UNIQUE(origin_domain, username_value))";
    if (!db_->Execute(query))
      return false;
    const char index[] = "CREATE INDEX stats_origin ON stats(origin_domain)";
    if (!db_->Execute(index))
      return false;
  }
  return true;
}

bool StatisticsTable::MigrateToVersion(int version) {
  if (!db_->DoesTableExist("stats"))
    return true;
  if (version == 16)
    return db_->Execute("DROP TABLE stats");
  return true;
}

bool StatisticsTable::AddRow(const InteractionsStats& stats) {
  if (!stats.origin_domain.is_valid())
    return false;
  sql::Statement s(db_->GetCachedStatement(
      SQL_FROM_HERE,
      "INSERT OR REPLACE INTO stats "
      "(origin_domain, username_value, dismissal_count, update_time) "
      "VALUES (?, ?, ?, ?)"));
  s.BindString(COLUMN_ORIGIN_DOMAIN, stats.origin_domain.spec());
  s.BindString16(COLUMN_USERNAME, stats.username_value);
  s.BindInt(COLUMN_DISMISSALS, stats.dismissal_count);
  s.BindInt64(COLUMN_DATE, stats.update_time.ToInternalValue());
  return s.Run();
}

bool StatisticsTable::RemoveRow(const GURL& domain) {
  if (!domain.is_valid())
    return false;
  sql::Statement s(db_->GetCachedStatement(SQL_FROM_HERE,
                                           "DELETE FROM stats WHERE "
                                           "origin_domain = ? "));
  s.BindString(0, domain.spec());
  return s.Run();
}

std::vector<scoped_ptr<InteractionsStats>> StatisticsTable::GetRows(
    const GURL& domain) {
  if (!domain.is_valid())
    return std::vector<scoped_ptr<InteractionsStats>>();
  const char query[] =
      "SELECT origin_domain, username_value, "
      "dismissal_count, update_time FROM stats WHERE origin_domain == ?";
  sql::Statement s(db_->GetCachedStatement(SQL_FROM_HERE, query));
  s.BindString(0, domain.spec());
  std::vector<scoped_ptr<InteractionsStats>> result;
  while (s.Step()) {
    result.push_back(make_scoped_ptr(new InteractionsStats));
    result.back()->origin_domain = GURL(s.ColumnString(COLUMN_ORIGIN_DOMAIN));
    result.back()->username_value = s.ColumnString16(COLUMN_USERNAME);
    result.back()->dismissal_count = s.ColumnInt(COLUMN_DISMISSALS);
    result.back()->update_time =
        base::Time::FromInternalValue(s.ColumnInt64(COLUMN_DATE));
  }
  return result;
}

bool StatisticsTable::RemoveStatsBetween(base::Time delete_begin,
                                         base::Time delete_end) {
  sql::Statement s(db_->GetCachedStatement(
      SQL_FROM_HERE,
      "DELETE FROM stats WHERE update_time >= ? AND update_time < ?"));
  s.BindInt64(0, delete_begin.ToInternalValue());
  s.BindInt64(1, delete_end.is_null() ? std::numeric_limits<int64_t>::max()
                                      : delete_end.ToInternalValue());
  return s.Run();
}

}  // namespace password_manager
