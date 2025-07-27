// Copyright (c) 2025 blackma9ick
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

/// Possible errors that can be returned from the UDisks D-Bus API.

#ifndef UDISKS_SDBUS_CPP_UDISKS_ERRORS_HPP_
#define UDISKS_SDBUS_CPP_UDISKS_ERRORS_HPP_

#include <array>
#include <cstddef>

namespace org::freedesktop::UDisks2 {

/// Error codes for the UDisks D-Bus error names.
enum class UdisksErrors : std::size_t {
  /// org.freedesktop.UDisks2.Error.Failed: The operation failed.
  kUdisksErrorFailed,
  /// org.freedesktop.UDisks2.Error.Cancelled: The operation was cancelled.
  kUdisksErrorCancelled,
  /// org.freedesktop.UDisks2.Error.AlreadyCancelled: The operation has already
  /// been cancelled.
  kUdisksErrorAlreadyCancelled,
  /// org.freedesktop.UDisks2.Error.NotAuthorized: Not authorized to perform the
  /// requested operation.
  kUdisksErrorNotAuthorized,
  /// org.freedesktop.UDisks2.Error.NotAuthorizedCanObtain: Like
  /// kUdisksErrorNotAuthorized but authorization can be obtained through
  /// e.g. authentication.
  kUdisksErrorNotAuthorizedCanObtain,
  /// org.freedesktop.UDisks2.Error.NotAuthorizedDismissed: Like
  /// kUdisksErrorNotAuthorized but an authentication was shown and the user
  /// dismissed it.
  kUdisksErrorNotAuthorizedDismissed,
  /// org.freedesktop.UDisks2.Error.AlreadyMounted: The device is already
  /// mounted.
  kUdisksErrorAlreadyMounted,
  /// org.freedesktop.UDisks2.Error.NotMounted: The device is not mounted.
  kUdisksErrorNotMounted,
  /// org.freedesktop.UDisks2.Error.OptionNotPermitted: Not permitted to use the
  /// requested option.
  kUdisksErrorOptionNotPermitted,
  /// org.freedesktop.UDisks2.Error.MountedByOtherUser: The device is mounted by
  /// another user.
  kUdisksErrorMountedByOtherUser,
  /// org.freedesktop.UDisks2.Error.AlreadyUnmounting: The device is already
  /// unmounting.
  kUdisksErrorAlreadyUnmounting,
  /// org.freedesktop.UDisks2.Error.NotSupported: The operation is not supported
  /// due to missing driver/tool support.
  kUdisksErrorNotSupported,
  /// org.freedesktop.UDisks2.Error.Timedout: The operation timed out.
  kUdisksErrorTimedOut,
  /// org.freedesktop.UDisks2.Error.WouldWakeup: The operation would wake up a
  /// disk that is in a deep-sleep state.
  kUdisksErrorWouldWakeup,
  /// org.freedesktop.UDisks2.Error.DeviceBusy: Attempting to unmount a device
  /// that is busy.
  kUdisksErrorDeviceBusy,
  /// org.freedesktop.UDisks2.Error.ISCSI.CommunicationFailed
  kUdisksErrorIscsiDaemonTransportFailed,
  /// org.freedesktop.UDisks2.Error.ISCSI.HostNotFound
  kUdisksErrorIscsiHostNotFound,
  /// org.freedesktop.UDisks2.Error.ISCSI.IDMB
  kUdisksErrorIscsiIdmb,
  /// org.freedesktop.UDisks2.Error.ISCSI.LoginFailed
  kUdisksErrorIscsiLoginFailed,
  /// org.freedesktop.UDisks2.Error.ISCSI.LoginAuthFailed
  kUdisksErrorIscsiLoginAuthFailed,
  /// org.freedesktop.UDisks2.Error.ISCSI.LoginFatal
  kUdisksErrorIscsiLoginFatal,
  /// org.freedesktop.UDisks2.Error.ISCSI.LogoutFailed
  kUdisksErrorIscsiLogoutFailed,
  /// org.freedesktop.UDisks2.Error.ISCSI.NoFirmware
  kUdisksErrorIscsiNoFirmware,
  /// org.freedesktop.UDisks2.Error.ISCSI.NoObjectsFound
  kUdisksErrorIscsiNoObjectsFound,
  /// org.freedesktop.UDisks2.Error.ISCSI.NotConnected
  kUdisksErrorIscsiNotConnected,
  /// org.freedesktop.UDisks2.Error.ISCSI.TransportFailed
  kUdisksErrorIscsiTransportFailed,
  /// org.freedesktop.UDisks2.Error.ISCSI.UnknownDiscoveryType
  kUdisksErrorIscsiUnknownDiscoveryType,
  /// Number of entries in this enum. Not an error, and cannot be an error!
  kUdisksErrorNumEntries,
};

/// Number of entries in the UdisksErrors enum.
constexpr int kUdisksErrorNumEntries{
    static_cast<int>(UdisksErrors::kUdisksErrorNumEntries)};

/// Name strings for the UDisks D-Bus errors.
constexpr std::array<const char *, kUdisksErrorNumEntries> udisks_error_names{
    "org.freedesktop.UDisks2.Error.Failed",
    "org.freedesktop.UDisks2.Error.Cancelled",
    "org.freedesktop.UDisks2.Error.AlreadyCancelled",
    "org.freedesktop.UDisks2.Error.NotAuthorized",
    "org.freedesktop.UDisks2.Error.NotAuthorizedCanObtain",
    "org.freedesktop.UDisks2.Error.NotAuthorizedDismissed",
    "org.freedesktop.UDisks2.Error.AlreadyMounted",
    "org.freedesktop.UDisks2.Error.NotMounted",
    "org.freedesktop.UDisks2.Error.OptionNotPermitted",
    "org.freedesktop.UDisks2.Error.MountedByOtherUser",
    "org.freedesktop.UDisks2.Error.AlreadyUnmounting",
    "org.freedesktop.UDisks2.Error.NotSupported",
    "org.freedesktop.UDisks2.Error.Timedout",
    "org.freedesktop.UDisks2.Error.WouldWakeup",
    "org.freedesktop.UDisks2.Error.DeviceBusy",
    "org.freedesktop.UDisks2.Error.ISCSI.CommunicationFailed",
    "org.freedesktop.UDisks2.Error.ISCSI.HostNotFound",
    "org.freedesktop.UDisks2.Error.ISCSI.IDMB",
    "org.freedesktop.UDisks2.Error.ISCSI.LoginFailed",
    "org.freedesktop.UDisks2.Error.ISCSI.LoginAuthFailed",
    "org.freedesktop.UDisks2.Error.ISCSI.LoginFatal",
    "org.freedesktop.UDisks2.Error.ISCSI.LogoutFailed",
    "org.freedesktop.UDisks2.Error.ISCSI.NoFirmware",
    "org.freedesktop.UDisks2.Error.ISCSI.NoObjectsFound",
    "org.freedesktop.UDisks2.Error.ISCSI.NotConnected",
    "org.freedesktop.UDisks2.Error.ISCSI.TransportFailed",
    "org.freedesktop.UDisks2.Error.ISCSI.UnknownDiscoveryType",
};

} // namespace org::freedesktop::UDisks2

#endif // UDISKS_SDBUS_CPP_UDISKS_ERRORS_HPP_
