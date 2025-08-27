// Copyright (c) 2025 Sofian-Hedi Krazini
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice (including the next
// paragraph) shall be included in all copies or substantial portions of the
// Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

/// Basic UDisks interface proxies.

#ifndef UDISKS_SDBUS_CPP_UDISKS_PROXY_WRAPPERS_HPP_
#define UDISKS_SDBUS_CPP_UDISKS_PROXY_WRAPPERS_HPP_

#include "udisks_globals.hpp"

#include <sdbus-c++/IConnection.h>
#include <sdbus-c++/ProxyInterfaces.h>
#include <sdbus-c++/Types.h>
#include <udisks-sdbus-c++/udisks_proxy.hpp>

namespace org::freedesktop::UDisks2::proxies {

/// Proxy to a UDisks block interface.
///
/// Block devices always implement this interface.
class UdisksBlock
    : public sdbus::ProxyInterfaces<org::freedesktop::UDisks2::Block_proxy> {
public:
  /// Construct a block proxy.
  ///
  /// @param connection System bus connection. Should be the same as used
  /// to construct the manager proxy (UdisksManager).
  /// @param object_path Object path to a UDisks block interface.
  UdisksBlock(sdbus::IConnection &connection,
              const sdbus::ObjectPath &object_path)
      : ProxyInterfaces(
            connection,
            sdbus::ServiceName{org::freedesktop::UDisks2::kInterfaceName},
            object_path) {
    registerProxy();
  }

  UdisksBlock(const UdisksBlock &) = delete;
  UdisksBlock(UdisksBlock &&) = delete;
  UdisksBlock &operator=(const UdisksBlock &) = delete;
  UdisksBlock &operator=(UdisksBlock &&) = delete;

  ~UdisksBlock() noexcept { unregisterProxy(); };
};

/// Proxy to a UDisks disk drive interface.
///
/// UdisksBlock might have an associated drive object and interface, if the
/// block device has an underlying disk drive (e.g., it is not a loop device).
class UdisksDrive
    : public sdbus::ProxyInterfaces<org::freedesktop::UDisks2::Drive_proxy> {
public:
  /// Construct a drive proxy.
  ///
  /// @param connection System bus connection. Should be the same as used
  /// to construct the manager proxy (UdisksManager).
  /// @param object_path Object path to a UDisks drive interface.
  UdisksDrive(sdbus::IConnection &connection,
              const sdbus::ObjectPath &object_path)
      : ProxyInterfaces(connection, org::freedesktop::UDisks2::kServiceName,
                        object_path) {
    registerProxy();
  }

  UdisksDrive(const UdisksDrive &) = delete;
  UdisksDrive(UdisksDrive &&) = delete;
  UdisksDrive &operator=(const UdisksDrive &) = delete;
  UdisksDrive &operator=(UdisksDrive &&) = delete;

  ~UdisksDrive() noexcept { unregisterProxy(); }
};

/// Proxy to a UDisks mountable filesystem interface, contained in a
/// UdisksBlockDevice.
///
/// UdisksBlockDevice may implement this interface.
class UdisksFilesystem : public sdbus::ProxyInterfaces<
                             org::freedesktop::UDisks2::Filesystem_proxy> {
public:
  /// Construct a filesystem proxy.
  ///
  /// @param connection System bus connection. Should be the same as used
  /// to construct the manager proxy (UdisksManager).
  /// @param object_path Object path to a UDisks Filesystem interface.
  UdisksFilesystem(sdbus::IConnection &connection,
                   const sdbus::ObjectPath &object_path)
      : ProxyInterfaces(connection, org::freedesktop::UDisks2::kServiceName,
                        object_path) {
    registerProxy();
  }

  UdisksFilesystem(const UdisksFilesystem &) = delete;
  UdisksFilesystem(UdisksFilesystem &&) = delete;
  UdisksFilesystem &operator=(const UdisksFilesystem &) = delete;
  UdisksFilesystem &operator=(UdisksFilesystem &&) = delete;

  ~UdisksFilesystem() noexcept { unregisterProxy(); }
};

/// Proxy to a UDisks loop device interface.
///
/// UdisksBlockDevice may implement this interface.
class UdisksLoop
    : public sdbus::ProxyInterfaces<org::freedesktop::UDisks2::Loop_proxy> {
public:
  /// Construct a loop proxy.
  ///
  /// @param connection System bus connection. Should be the same as used
  /// to construct the manager proxy (UdisksManager).
  /// @param object_path Object path to a UDisks loop interface.
  UdisksLoop(sdbus::IConnection &connection,
             const sdbus::ObjectPath &objectPath)
      : ProxyInterfaces<Loop_proxy>(
            connection, org::freedesktop::UDisks2::kServiceName, objectPath) {
    registerProxy();
  }

  UdisksLoop(const UdisksLoop &) = delete;
  UdisksLoop(UdisksLoop &&) = delete;
  UdisksLoop &operator=(const UdisksLoop &) = delete;
  UdisksLoop &operator=(UdisksLoop &&) = delete;

  ~UdisksLoop() noexcept { unregisterProxy(); }
};

/// Proxy to a UDisks partition interface.
///
/// UdisksBlockDevice may implement this interface.
class UdisksPartition : public sdbus::ProxyInterfaces<
                            org::freedesktop::UDisks2::Partition_proxy> {
public:
  /// Construct a partition proxy.
  ///
  /// @param connection System bus connection. Should be the same as used
  /// to construct the manager proxy (UdisksManager).
  /// @param object_path Object path to a UDisks partition interface.
  UdisksPartition(sdbus::IConnection &connection,
                  const sdbus::ObjectPath &objectPath)
      : ProxyInterfaces<Partition_proxy>(
            connection, org::freedesktop::UDisks2::kServiceName, objectPath) {
    registerProxy();
  }

  UdisksPartition(const UdisksPartition &) = delete;
  UdisksPartition(UdisksPartition &&) = delete;
  UdisksPartition &operator=(const UdisksPartition &) = delete;
  UdisksPartition &operator=(UdisksPartition &&) = delete;

  ~UdisksPartition() noexcept { unregisterProxy(); }
};

} // namespace org::freedesktop::UDisks2::proxies

#endif // UDISKS_SDBUS_CPP_UDISKS_PROXY_WRAPPERS_HPP_
