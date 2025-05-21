// Copyright (c) 2025 xlacroixx
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

namespace udisks_sdbus {

/// Error codes for the UDisks D-Bus error names.
enum class UdisksErrors {
  /// org.freedesktop.UDisks2.Error.Failed: The operation failed.
  UDISKS_ERROR_FAILED,
  /// org.freedesktop.UDisks2.Error.Cancelled: The operation was cancelled.
  UDISKS_ERROR_CANCELLED,
  /// org.freedesktop.UDisks2.Error.AlreadyCancelled: The operation has already
  /// been cancelled.
  UDISKS_ERROR_ALREADY_CANCELLED,
  /// org.freedesktop.UDisks2.Error.NotAuthorized: Not authorized to perform the
  /// requested operation.
  UDISKS_ERROR_NOT_AUTHORIZED,
  /// org.freedesktop.UDisks2.Error.NotAuthorizedCanObtain: Like
  /// %UDISKS_ERROR_NOT_AUTHORIZED but authorization can be obtained through
  /// e.g. authentication.
  UDISKS_ERROR_NOT_AUTHORIZED_CAN_OBTAIN,
  /// org.freedesktop.UDisks2.Error.NotAuthorizedDismissed: Like
  /// %UDISKS_ERROR_NOT_AUTHORIZED but an authentication was shown and the user
  /// dismissed it.
  UDISKS_ERROR_NOT_AUTHORIZED_DISMISSED,
  /// org.freedesktop.UDisks2.Error.AlreadyMounted: The device is already
  /// mounted.
  UDISKS_ERROR_ALREADY_MOUNTED,
  /// org.freedesktop.UDisks2.Error.NotMounted: The device is not mounted.
  UDISKS_ERROR_NOT_MOUNTED,
  /// org.freedesktop.UDisks2.Error.OptionNotPermitted: Not permitted to use the
  /// requested option.
  UDISKS_ERROR_OPTION_NOT_PERMITTED,
  /// org.freedesktop.UDisks2.Error.MountedByOtherUser: The device is mounted by
  /// another user.
  UDISKS_ERROR_MOUNTED_BY_OTHER_USER,
  /// org.freedesktop.UDisks2.Error.AlreadyUnmounting: The device is already
  /// unmounting.
  UDISKS_ERROR_ALREADY_UNMOUNTING,
  /// org.freedesktop.UDisks2.Error.NotSupported: The operation is not supported
  /// due to missing driver/tool support.
  UDISKS_ERROR_NOT_SUPPORTED,
  /// org.freedesktop.UDisks2.Error.Timedout: The operation timed out.
  UDISKS_ERROR_TIMED_OUT,
  /// org.freedesktop.UDisks2.Error.WouldWakeup: The operation would wake up a
  /// disk that is in a deep-sleep state.
  UDISKS_ERROR_WOULD_WAKEUP,
  /// org.freedesktop.UDisks2.Error.DeviceBusy: Attempting to unmount a device
  /// that is busy.
  UDISKS_ERROR_DEVICE_BUSY,
  /// org.freedesktop.UDisks2.Error.ISCSI.CommunicationFailed
  UDISKS_ERROR_ISCSI_DAEMON_TRANSPORT_FAILED,
  /// org.freedesktop.UDisks2.Error.ISCSI.HostNotFound
  UDISKS_ERROR_ISCSI_HOST_NOT_FOUND,
  /// org.freedesktop.UDisks2.Error.ISCSI.IDMB
  UDISKS_ERROR_ISCSI_IDMB,
  /// org.freedesktop.UDisks2.Error.ISCSI.LoginFailed
  UDISKS_ERROR_ISCSI_LOGIN_FAILED,
  /// org.freedesktop.UDisks2.Error.ISCSI.LoginAuthFailed
  UDISKS_ERROR_ISCSI_LOGIN_AUTH_FAILED,
  /// org.freedesktop.UDisks2.Error.ISCSI.LoginFatal
  UDISKS_ERROR_ISCSI_LOGIN_FATAL,
  /// org.freedesktop.UDisks2.Error.ISCSI.LogoutFailed
  UDISKS_ERROR_ISCSI_LOGOUT_FAILED,
  /// org.freedesktop.UDisks2.Error.ISCSI.NoFirmware
  UDISKS_ERROR_ISCSI_NO_FIRMWARE,
  /// org.freedesktop.UDisks2.Error.ISCSI.NoObjectsFound
  UDISKS_ERROR_ISCSI_NO_OBJECTS_FOUND,
  /// org.freedesktop.UDisks2.Error.ISCSI.NotConnected
  UDISKS_ERROR_ISCSI_NOT_CONNECTED,
  /// org.freedesktop.UDisks2.Error.ISCSI.TransportFailed
  UDISKS_ERROR_ISCSI_TRANSPORT_FAILED,
  /// org.freedesktop.UDisks2.Error.ISCSI.UnknownDiscoveryType
  UDISKS_ERROR_ISCSI_UNKNOWN_DISCOVERY_TYPE,
  /// Number of entries in this enum. Not an error, and cannot be an error!
  UDISKS_ERROR_NUM_ENTRIES,
};

/// Number of entries in the UdisksErrors enum.
constexpr int kUdisksErrorNumEntries{
    static_cast<int>(UdisksErrors::UDISKS_ERROR_NUM_ENTRIES)};

/// Name strings for the UDisks D-Bus errors.
constexpr std::array<const char *, kUdisksErrorNumEntries> UdisksErrorNames{
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

static_assert(UdisksErrorNames.size() ==
                  static_cast<int>(UdisksErrors::UDISKS_ERROR_NUM_ENTRIES),
              "must update UDisks error names");

} // namespace udisks_sdbus

#endif // UDISKS_SDBUS_CPP_UDISKS_ERRORS_HPP_
