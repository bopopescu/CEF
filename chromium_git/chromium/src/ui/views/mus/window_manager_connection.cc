// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/views/mus/window_manager_connection.h"

#include <utility>

#include "base/lazy_instance.h"
#include "base/threading/thread_local.h"
#include "components/mus/public/cpp/window_tree_connection.h"
#include "components/mus/public/interfaces/window_tree.mojom.h"
#include "mojo/converters/geometry/geometry_type_converters.h"
#include "mojo/converters/network/network_type_converters.h"
#include "mojo/shell/public/cpp/application_connection.h"
#include "mojo/shell/public/cpp/application_impl.h"
#include "ui/views/mus/native_widget_mus.h"
#include "ui/views/mus/screen_mus.h"
#include "ui/views/views_delegate.h"

namespace views {
namespace {

using WindowManagerConnectionPtr =
    base::ThreadLocalPointer<views::WindowManagerConnection>;

// Env is thread local so that aura may be used on multiple threads.
base::LazyInstance<WindowManagerConnectionPtr>::Leaky lazy_tls_ptr =
    LAZY_INSTANCE_INITIALIZER;

}  // namespace

// static
void WindowManagerConnection::Create(mojo::ApplicationImpl* app) {
  DCHECK(!lazy_tls_ptr.Pointer()->Get());
  lazy_tls_ptr.Pointer()->Set(new WindowManagerConnection(app));
}

// static
WindowManagerConnection* WindowManagerConnection::Get() {
  WindowManagerConnection* connection = lazy_tls_ptr.Pointer()->Get();
  DCHECK(connection);
  return connection;
}

mus::Window* WindowManagerConnection::NewWindow(
    const std::map<std::string, std::vector<uint8_t>>& properties) {
  return window_tree_connection_->NewTopLevelWindow(&properties);
}

WindowManagerConnection::WindowManagerConnection(mojo::ApplicationImpl* app)
    : app_(app), window_tree_connection_(nullptr) {
  window_tree_connection_.reset(mus::WindowTreeConnection::Create(this, app_));

  screen_.reset(new ScreenMus(this));
  screen_->Init(app);

  ViewsDelegate::GetInstance()->set_native_widget_factory(
      base::Bind(&WindowManagerConnection::CreateNativeWidget,
                 base::Unretained(this)));
}

WindowManagerConnection::~WindowManagerConnection() {
  // ~WindowTreeConnection calls back to us (we're the WindowTreeDelegate),
  // destroy it while we are still valid.
  window_tree_connection_.reset();
}

void WindowManagerConnection::OnEmbed(mus::Window* root) {}

void WindowManagerConnection::OnConnectionLost(
    mus::WindowTreeConnection* connection) {}

void WindowManagerConnection::OnWindowManagerFrameValuesChanged() {
  if (window_tree_connection_)
    NativeWidgetMus::NotifyFrameChanged(window_tree_connection_.get());
}

NativeWidget* WindowManagerConnection::CreateNativeWidget(
    const Widget::InitParams& init_params,
    internal::NativeWidgetDelegate* delegate) {
  std::map<std::string, std::vector<uint8_t>> properties;
  NativeWidgetMus::ConfigurePropertiesForNewWindow(init_params, &properties);
  return new NativeWidgetMus(delegate, app_->shell(), NewWindow(properties),
                             mus::mojom::SurfaceType::DEFAULT);
}

}  // namespace views
