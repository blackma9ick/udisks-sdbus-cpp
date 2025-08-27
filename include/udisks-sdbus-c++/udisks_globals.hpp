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

/// Basic UDisks global constants.

#ifndef UDISKS_SDBUS_CPP_UDISKS_GLOBALS_HPP_
#define UDISKS_SDBUS_CPP_UDISKS_GLOBALS_HPP_

#include <sdbus-c++/IConnection.h>
#include <sdbus-c++/Types.h>

namespace org::freedesktop::UDisks2 {

static const sdbus::ServiceName kServiceName{"org.freedesktop.UDisks2"};
constexpr auto kInterfaceName{"org.freedesktop.UDisks2"};
constexpr auto kObjectPath{"/org/freedesktop/UDisks2"};

} // namespace org::freedesktop::UDisks2

#endif // UDISKS_SDBUS_CPP_UDISKS_GLOBALS_HPP_
