
// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/network/public/interfaces/network_service.mojom
//

package org.chromium.mojom.mojo;

import org.chromium.base.annotations.SuppressFBWarnings;


public interface NetworkService extends org.chromium.mojo.bindings.Interface {



    public interface Proxy extends NetworkService, org.chromium.mojo.bindings.Interface.Proxy {
    }

    Manager<NetworkService, NetworkService.Proxy> MANAGER = NetworkService_Internal.MANAGER;


    void createTcpBoundSocket(
NetAddress localAddress, org.chromium.mojo.bindings.InterfaceRequest<TcpBoundSocket> boundSocket, 
CreateTcpBoundSocketResponse callback);

    interface CreateTcpBoundSocketResponse extends org.chromium.mojo.bindings.Callbacks.Callback2<NetworkError, NetAddress> { }



    void createTcpConnectedSocket(
NetAddress remoteAddress, org.chromium.mojo.system.DataPipe.ConsumerHandle sendStream, org.chromium.mojo.system.DataPipe.ProducerHandle receiveStream, org.chromium.mojo.bindings.InterfaceRequest<TcpConnectedSocket> clientSocket, 
CreateTcpConnectedSocketResponse callback);

    interface CreateTcpConnectedSocketResponse extends org.chromium.mojo.bindings.Callbacks.Callback2<NetworkError, NetAddress> { }



    void createUdpSocket(
org.chromium.mojo.bindings.InterfaceRequest<UdpSocket> socket);



    void createHttpServer(
NetAddress localAddress, HttpServerDelegate delegate, 
CreateHttpServerResponse callback);

    interface CreateHttpServerResponse extends org.chromium.mojo.bindings.Callbacks.Callback2<NetworkError, NetAddress> { }



    void getMimeTypeFromFile(
String filePath, 
GetMimeTypeFromFileResponse callback);

    interface GetMimeTypeFromFileResponse extends org.chromium.mojo.bindings.Callbacks.Callback1<String> { }


}
