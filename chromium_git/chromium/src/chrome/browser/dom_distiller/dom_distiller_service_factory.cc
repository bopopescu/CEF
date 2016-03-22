// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/dom_distiller/dom_distiller_service_factory.h"

#include <utility>

#include "base/threading/sequenced_worker_pool.h"
#include "chrome/browser/profiles/incognito_helpers.h"
#include "chrome/browser/profiles/profile.h"
#include "components/dom_distiller/content/browser/distiller_page_web_contents.h"
#include "components/dom_distiller/core/article_entry.h"
#include "components/dom_distiller/core/distiller.h"
#include "components/dom_distiller/core/dom_distiller_store.h"
#include "components/keyed_service/content/browser_context_dependency_manager.h"
#include "components/leveldb_proto/proto_database.h"
#include "components/leveldb_proto/proto_database_impl.h"
#include "content/public/browser/browser_context.h"
#include "content/public/browser/browser_thread.h"

namespace dom_distiller {

DomDistillerContextKeyedService::DomDistillerContextKeyedService(
    scoped_ptr<DomDistillerStoreInterface> store,
    scoped_ptr<DistillerFactory> distiller_factory,
    scoped_ptr<DistillerPageFactory> distiller_page_factory,
    scoped_ptr<DistilledPagePrefs> distilled_page_prefs)
    : DomDistillerService(std::move(store),
                          std::move(distiller_factory),
                          std::move(distiller_page_factory),
                          std::move(distilled_page_prefs)) {}

// static
DomDistillerServiceFactory* DomDistillerServiceFactory::GetInstance() {
  return base::Singleton<DomDistillerServiceFactory>::get();
}

// static
DomDistillerContextKeyedService*
DomDistillerServiceFactory::GetForBrowserContext(
    content::BrowserContext* context) {
  return static_cast<DomDistillerContextKeyedService*>(
      GetInstance()->GetServiceForBrowserContext(context, true));
}

DomDistillerServiceFactory::DomDistillerServiceFactory()
    : BrowserContextKeyedServiceFactory(
          "DomDistillerService",
          BrowserContextDependencyManager::GetInstance()) {}

DomDistillerServiceFactory::~DomDistillerServiceFactory() {}

KeyedService* DomDistillerServiceFactory::BuildServiceInstanceFor(
    content::BrowserContext* profile) const {
  scoped_refptr<base::SequencedTaskRunner> background_task_runner =
      content::BrowserThread::GetBlockingPool()->GetSequencedTaskRunner(
          base::SequencedWorkerPool::GetSequenceToken());

  scoped_ptr<leveldb_proto::ProtoDatabaseImpl<ArticleEntry> > db(
      new leveldb_proto::ProtoDatabaseImpl<ArticleEntry>(
          background_task_runner));

  base::FilePath database_dir(
      profile->GetPath().Append(FILE_PATH_LITERAL("Articles")));

  scoped_ptr<DomDistillerStore> dom_distiller_store(
      new DomDistillerStore(std::move(db), database_dir));

  scoped_ptr<DistillerPageFactory> distiller_page_factory(
      new DistillerPageWebContentsFactory(profile));
  scoped_ptr<DistillerURLFetcherFactory> distiller_url_fetcher_factory(
      new DistillerURLFetcherFactory(profile->GetRequestContext()));

  dom_distiller::proto::DomDistillerOptions options;
  if (VLOG_IS_ON(1)) {
    options.set_debug_level(logging::GetVlogLevelHelper(
        FROM_HERE.file_name(), ::strlen(FROM_HERE.file_name())));
  }
  // Options for pagination algorithm:
  // - "next": detect anchors with "next" text
  // - "pagenum": detect anchors with numeric page numbers
  // Default is "next".
  options.set_pagination_algo("next");
  scoped_ptr<DistillerFactory> distiller_factory(new DistillerFactoryImpl(
      std::move(distiller_url_fetcher_factory), options));
  scoped_ptr<DistilledPagePrefs> distilled_page_prefs(
      new DistilledPagePrefs(Profile::FromBrowserContext(profile)->GetPrefs()));

  DomDistillerContextKeyedService* service =
      new DomDistillerContextKeyedService(
          std::move(dom_distiller_store), std::move(distiller_factory),
          std::move(distiller_page_factory), std::move(distilled_page_prefs));

  return service;
}

content::BrowserContext* DomDistillerServiceFactory::GetBrowserContextToUse(
    content::BrowserContext* context) const {
  // Makes normal profile and off-the-record profile use same service instance.
  return chrome::GetBrowserContextRedirectedInIncognito(context);
}

}  // namespace dom_distiller
