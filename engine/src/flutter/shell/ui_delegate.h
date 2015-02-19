// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKY_SHELL_UI_DELEGATE_H_
#define SKY_SHELL_UI_DELEGATE_H_

#include "mojo/public/cpp/bindings/interface_request.h"
#include "sky/services/viewport/viewport_observer.mojom.h"
#include "ui/gfx/geometry/size.h"

namespace sky {
namespace shell {

class UIDelegate {
 public:
  virtual void ConnectToViewportObserver(
      mojo::InterfaceRequest<ViewportObserver> request) = 0;

 protected:
  virtual ~UIDelegate();
};

}  // namespace shell
}  // namespace sky

#endif  // SKY_SHELL_UI_DELEGATE_H_
