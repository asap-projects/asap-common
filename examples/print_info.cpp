//===----------------------------------------------------------------------===//
// Distributed under the 3-Clause BSD License. See accompanying file LICENSE or
// copy at https://opensource.org/licenses/BSD-3-Clause).
// SPDX-License-Identifier: BSD-3-Clause
//===----------------------------------------------------------------------===//

#include <common/compilers.h>
#include <common/platform.h>
#include <common/version.h>

#include <string>

namespace {
auto VersionInfo() -> std::string {
  return ASAP_NAME_VERSION;
}

auto PlatformInfo() -> std::string {
#if defined(ASAP_LINUX)
  return "Linux";
#elif defined(ASAP_WINDOWS)
  return "Windows";
#elif defined(ASAP_APPLE_OSX)
  return "Apple OS X";
#else
  return "Other Platform";
#endif
}

auto Compiler() -> std::string {
#if defined(ASAP_CLANG_VERSION)
  return "Clang";
#elif defined(ASAP_GCC_VERSION)
  return "GCC";
#elif defined(ASAP_MSVC_VERSION)
  return "MSVC";
#else
  return "Other Compiler";
#endif
}

auto CompilerVersion() -> int {
#if defined(ASAP_CLANG_VERSION)
  return ASAP_CLANG_VERSION;
#elif defined(ASAP_GCC_VERSION)
  return ASAP_GCC_VERSION;
#elif defined(ASAP_MSVC_VERSION)
  return ASAP_MSVC_VERSION;
#else
  return 0;
#endif
}
} // namespace

#include <iostream>

auto main(int /*argc*/, char * /*argv*/[]) -> int {
  std::cout << "-- " << VersionInfo() << "\n";
  std::cout << "-- "
            << "Built on " << PlatformInfo() << " with " << Compiler();

  auto compiler_version = CompilerVersion();
  if (compiler_version != 0) {
    std::cout << " " << compiler_version;
  }

  std::cout << std::endl;
  return 0;
}
