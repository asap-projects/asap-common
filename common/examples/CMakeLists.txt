# ===-----------------------------------------------------------------------===#
# Distributed under the 3-Clause BSD License. See accompanying file LICENSE or
# copy at https://opensource.org/licenses/BSD-3-Clause.
# SPDX-License-Identifier: BSD-3-Clause
# ===-----------------------------------------------------------------------===#

# ==============================================================================
# Build instructions
# ==============================================================================

if(ASAP_BUILD_TESTS)
  set(MAIN_TEST_TARGET_NAME ${MODULE_TARGET_NAME}_info)

  asap_add_test(
    ${MAIN_TEST_TARGET_NAME}
    INTEGRATION_TEST
    POST_BUILD
    SRCS
    "print_info.cpp"
    LINK
    asap::common
    COMMENT
    "ASAP common post-build info example"
  )
endif()
