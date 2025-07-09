# Changelog

All notable changes to this project will be documented in this file. See [standard-version](https://github.com/conventional-changelog/standard-version) for commit guidelines.

## [2.1.0](https://github.com/asap-projects/asap-common/compare/v2.0.6...v2.1.0) (2025-07-09)


### Features

* add build option to enable or disable docs targets ([481c240](https://github.com/asap-projects/asap-common/commit/481c24087a23ad551e3ccccd260fa4896c963c2c))
* add GitHub Actions workflow for release-please automation ([69d96da](https://github.com/asap-projects/asap-common/commit/69d96dad7cc56570067f825b420e1dabc4270693))
* add the `version-info` tool to print the project info ([cb228e8](https://github.com/asap-projects/asap-common/commit/cb228e8af73fbf063371e4c597f757bf5e9a4b75))
* comprehensive macos builds for CI ([084ae86](https://github.com/asap-projects/asap-common/commit/084ae866e16a7999c8612599610c385e0e555321))
* comprehensive ubuntu builds for CI ([27fce46](https://github.com/asap-projects/asap-common/commit/27fce464c0664d160a519908898cc71d6ba95980))
* comprehensive windows builds for CI ([e46196f](https://github.com/asap-projects/asap-common/commit/e46196f7daf138c2fd33248fbc0593367149480b))
* custom index.html should be optional in project doc root ([9f906fd](https://github.com/asap-projects/asap-common/commit/9f906fd88181bcb75132fc4a6f8127538a58f22a))
* customize release-please workflow ([b3504fb](https://github.com/asap-projects/asap-common/commit/b3504fbfc033deebc8d7fc578e3e7c160d42b927))
* customize release-please workflow to update versions ([c4921d6](https://github.com/asap-projects/asap-common/commit/c4921d64bcc979b45f58933813155c1d38ec9bbb))
* enhance configure logs with project/module nesting hierarchy ([f6c13f2](https://github.com/asap-projects/asap-common/commit/f6c13f2a08c89cac57fb2f0dd857c8f382e50e7b))
* implement robust project-wide formatting ([afcaebe](https://github.com/asap-projects/asap-common/commit/afcaebe544fc03684ae2f85d8507b1f4571d989b))
* increase ccache hit rate ([a22a912](https://github.com/asap-projects/asap-common/commit/a22a91226060851fe9fc7e5bc0e51973df94d95c))
* more robust handling of contract checking mode ([304e9ae](https://github.com/asap-projects/asap-common/commit/304e9aee1e8fb265be78163578c45ae22569e52b))
* option to control the use of ccache, default is OFF ([49a17a9](https://github.com/asap-projects/asap-common/commit/49a17a99026ae7e59d14297d01ed2f8d10c78762))
* support for qualified module names ([0c01c12](https://github.com/asap-projects/asap-common/commit/0c01c1222b0bf5877811ff19f2626163f7cc9e40))
* upgrade CPM to 0.38.1 ([b333b38](https://github.com/asap-projects/asap-common/commit/b333b3858c204fa2151171f0ac494853089ffa37))
* use pre-commit instead of husky ([551e1a1](https://github.com/asap-projects/asap-common/commit/551e1a16e3c106d0e48629932fc5121de86f83ec))


### Bug Fixes

* [#13](https://github.com/asap-projects/asap-common/issues/13) move "caexcludepath" to dev-windows and exclude CPM cache ([0571714](https://github.com/asap-projects/asap-common/commit/0571714e9436bfec26d6450b5bc37f2a5f478a55))
* [#14](https://github.com/asap-projects/asap-common/issues/14) upgrade CPM to 0.35.6 ([695414b](https://github.com/asap-projects/asap-common/commit/695414b8e66d4d42d7ef3aaef3c6a4b8399d16c2))
* [#16](https://github.com/asap-projects/asap-common/issues/16) use CMAKE_CURRENT_SOURCE_DIR instead of CMAKE_SOURCE_DIR for cmake includes ([4ac6928](https://github.com/asap-projects/asap-common/commit/4ac6928fc2a0bf806bbcaa3bea898b5ff018a164))
* [#17](https://github.com/asap-projects/asap-common/issues/17) git should not be required ([2c76104](https://github.com/asap-projects/asap-common/commit/2c761046d0801f643aa0215d34f2795ff0093dfc))
* [#18](https://github.com/asap-projects/asap-common/issues/18) enforce end of line to LF ([943ae47](https://github.com/asap-projects/asap-common/commit/943ae479e09de999c324a9cfe3bbf8d688d255a3))
* [#19](https://github.com/asap-projects/asap-common/issues/19) use generator expressions instead of CMAKE_BUILD_TYPE ([857d299](https://github.com/asap-projects/asap-common/commit/857d2997d4ec6c879036e10234b8baf907e91089))
* [#20](https://github.com/asap-projects/asap-common/issues/20) local install should use CMAKE_INSTALL_PREFIX to set variables ([2e1f1d4](https://github.com/asap-projects/asap-common/commit/2e1f1d49baff64dbf47dbbda234886ad2dfdbf1c))
* [#20](https://github.com/asap-projects/asap-common/issues/20) use CMAKE_INSTALL_PREFIX to set variables ([2fffd96](https://github.com/asap-projects/asap-common/commit/2fffd96392114993bbb72e3f614725f867d61ab1))
* 15 get target type before testing it ([b8bd378](https://github.com/asap-projects/asap-common/commit/b8bd378f52bc131b84c13b08cfe70d649e9d9be0))
* adapt versioning for release-please simple strategy ([06014b5](https://github.com/asap-projects/asap-common/commit/06014b5387adaf1536582f17096f39a05c149829))
* add .python-version to .gitignore ([9c8957c](https://github.com/asap-projects/asap-common/commit/9c8957c833e6553daa1f6e8c8584b318fc78aef9))
* add 'Ninja' generator to macos-builds workflow ([32bcb28](https://github.com/asap-projects/asap-common/commit/32bcb28b97d3c904a1dd2841aa28602293cbf718))
* allow project options to be overriden from master projects or command line ([2812446](https://github.com/asap-projects/asap-common/commit/2812446053301c9ebb6ff0ce5a37a74a95535d8d))
* always add code coverage 'all' targets ([d7309a0](https://github.com/asap-projects/asap-common/commit/d7309a0806e11a46c73b700f12bccb424c62839b))
* always include CTest even when ASAP_BUILD_TESTS is OFF ([4c5ef88](https://github.com/asap-projects/asap-common/commit/4c5ef88ab79bd1ad50b68e1cc2a41fc16ce73613))
* api export generated header does not respect project layout ([571ac3f](https://github.com/asap-projects/asap-common/commit/571ac3f7b24b1805ebad46c3ccf38b13aeee72ae))
* **build:** [#21](https://github.com/asap-projects/asap-common/issues/21) target option `WARNING` not propagated properly ([432cdaf](https://github.com/asap-projects/asap-common/commit/432cdaff1e5c8775d0d5c533dd0abe5eac229bd7))
* contract mode definition should only be added when not testing asap_contract ([c6d5e34](https://github.com/asap-projects/asap-common/commit/c6d5e342e7a74236bb1b006be1e0d6bfe956a51a))
* contract mode definition should only be added when not testing asap_contract ([cb7c9fb](https://github.com/asap-projects/asap-common/commit/cb7c9fbb3fc1043626e719747c1f46bcbc4ba121))
* create .clangd only if it does not exists ([8942178](https://github.com/asap-projects/asap-common/commit/8942178bb3e6049bcc5e75863982a03698e3fd2d))
* enable docs build for pages ([010fc52](https://github.com/asap-projects/asap-common/commit/010fc52841c19585508f5337072bc323dfaea598))
* enable profiling for test coverage for MSVC ([7348d0a](https://github.com/asap-projects/asap-common/commit/7348d0a36b05b2f2e9c517e5b981f2c218bd511e)), closes [#22](https://github.com/asap-projects/asap-common/issues/22)
* generate version numbers as numbers ([b3491d1](https://github.com/asap-projects/asap-common/commit/b3491d149dd2272f6bc547d4970e3cc34128e5cf))
* generated `version.h` should follow project naming ([329bcdf](https://github.com/asap-projects/asap-common/commit/329bcdfc8cb9ba4782d0cbf4b3f21ad677307644))
* honor the options to disable doc, docygen, sphinx ([2d66564](https://github.com/asap-projects/asap-common/commit/2d66564ba97a3fbcf0ea5b856dad801a8718796f))
* install master project generated header files ([3c5c162](https://github.com/asap-projects/asap-common/commit/3c5c1628b3c920e52200f7e14ecde2346b78a6f4))
* main.cpp generation fails when multiple build configs are running ([e7eb314](https://github.com/asap-projects/asap-common/commit/e7eb31400ef177d7d161501bc209005721d354f2))
* only add doxygen doc target if ASAP_BUILD_DOCS is ON ([f05b118](https://github.com/asap-projects/asap-common/commit/f05b118f2118f357616e89a79308d6f9d685598b))
* remove unnecessary esbonio settings ([5f5ada2](https://github.com/asap-projects/asap-common/commit/5f5ada26c0c1a1204aa056c90180e2e866b7db03))
* remove Xcode generator from macos-builds workflow ([fde6a3b](https://github.com/asap-projects/asap-common/commit/fde6a3b79554a218834aaf8b816b2c371c74beed))
* remove Xcode setup step from macos-builds workflow ([a97b42a](https://github.com/asap-projects/asap-common/commit/a97b42ac48902e7f23d98e6d8fecc2a1eff91e9c))
* restore test setup deleted by mistake ([cec7b9d](https://github.com/asap-projects/asap-common/commit/cec7b9d92481d1480c54610892cbfd954b9e0068))
* sphinx generation targets not properly setup ([a06b9a1](https://github.com/asap-projects/asap-common/commit/a06b9a177ca551849be712552424c578e1953f8d))
* sub-projects with tests fail due to coverage all target not being setup early enough ([400b2cc](https://github.com/asap-projects/asap-common/commit/400b2ccc120bd4f2c4d70f48fd3f94ce7a3f6de0))
* top level install not working properly ([4ac4a31](https://github.com/asap-projects/asap-common/commit/4ac4a31001a2ab73764e3d9fe3f279b1e7b25aee))
* update actions to latest versions in workflows ([dac90de](https://github.com/asap-projects/asap-common/commit/dac90de17a92b1be90b46090070d0c0a1ce912a4))
* update branch name from main to master in release workflow ([802960e](https://github.com/asap-projects/asap-common/commit/802960e6e314b86b0437cd983daf09a6c314e4d2))
* update GitHub Actions to use latest versions of actions and Python ([52c983d](https://github.com/asap-projects/asap-common/commit/52c983dbae057a217e2e45bc00aa73d31b8cf31b))
* update GitHub Actions to use latest versions of actions and Python ([40cc904](https://github.com/asap-projects/asap-common/commit/40cc90402c07c4cefbcad5077a0c967c4b280ca7))
* update macos workflow and fix issues ([7575f81](https://github.com/asap-projects/asap-common/commit/7575f8109d44a6113b96bdee0c342ec67d0814e9))
* update Xcode versions in macos-builds workflow ([f93fc1f](https://github.com/asap-projects/asap-common/commit/f93fc1f8dceb067ad82de623a3cf3b3775afc7b5))
* upgrade doxygen config file to avoid unnecessary warnings ([864fd65](https://github.com/asap-projects/asap-common/commit/864fd656c56957b1bcfeef8f5de0cdb8f9f0df3a))
* use cmake-format extension default behavior ([a5d5c5e](https://github.com/asap-projects/asap-common/commit/a5d5c5eae39e4d3d0094c00848cfe777d331a219))
* use correct path for the version include file ([7997b68](https://github.com/asap-projects/asap-common/commit/7997b68eeef236e6940b0ba168c79dbdd21b34ad))
* use swift common for clang format/tidy and gersemi for cmake format ([dc22af9](https://github.com/asap-projects/asap-common/commit/dc22af91ba2fdcf8eb60542644949d6ede44a388))
* version info tool using wrong template ([9447747](https://github.com/asap-projects/asap-common/commit/944774796d23bea0f6008945e2b037d3b147dd43))
* version-info test was added even when ASAP_BUILD_TESTS is OFF ([b566e7b](https://github.com/asap-projects/asap-common/commit/b566e7b555ffb40f8ab1eea43d9a965c5724ccf1))
* wrong variable used for target name ([4ecd2bb](https://github.com/asap-projects/asap-common/commit/4ecd2bbfa896547e77cdbf7ba1c535f80125eef4))
* wrong variable used of target name ([04b5343](https://github.com/asap-projects/asap-common/commit/04b5343ae541bd6d4f5ae1c1fa2eb85b93e0b5a3))

## [2.0.6](http://github.com/abdes/asap/compare/v2.0.5...v2.0.6) (2022-08-20)

* code cleanup to eliminate compiler/linter warnings and improve code quality.

## [2.0.5](http://github.com/abdes/asap/compare/v2.0.4...v2.0.5) (2022-08-20)

### Features

* add ccache support to dev container
  ([202c27a](http://github.com/abdes/asap/commit/202c27a628f7f35ae17f2df91c1d95f67360abea))

* make ccache usable on all platforms
  ([412730f](http://github.com/abdes/asap/commit/412730f86679d7ccd350cadf5649b7a489376cae))

### Bug Fixes

* [#10](http://github.com/abdes/asap/issues/10) no more template export header
  ([dd8ffd5](http://github.com/abdes/asap/commit/dd8ffd5a8f36340963349c7ebcb7c1713c2f880a))
* [#11](http://github.com/abdes/asap/issues/11) refactor compiler options
  management
  ([78ae493](http://github.com/abdes/asap/commit/78ae4933f2e263a55f6537e66347c6b11a24b961))
* [#12](http://github.com/abdes/asap/issues/12) disable used-but-marked-unused
  ([6d42d83](http://github.com/abdes/asap/commit/6d42d83bfdd16123f05a69726058dc5f103143be))
* [#5](http://github.com/abdes/asap/issues/5) update cmake/common to latest
  ([5034b22](http://github.com/abdes/asap/commit/5034b22d39e5cb54acd51baa0bf815dbdd82093b))
* [#9](http://github.com/abdes/asap/issues/9) remove no longer used function
  ([5a7416f](http://github.com/abdes/asap/commit/5a7416f9563aae303d68ca2bb878fef97fbb7130))
* **#6:** properly setup install layout
  ([71fd5d5](http://github.com/abdes/asap/commit/71fd5d5ee6f4694a8d7d6994e3a09d5b2f18ce24)),
  closes [#6](http://github.com/abdes/asap/issues/6)
* **#7:** add `build` and `ops` commit types
  ([0d9187e](http://github.com/abdes/asap/commit/0d9187e9d20788d3f0c5048bcb4deca4cf5280e3)),
  closes [#7](http://github.com/abdes/asap/issues/7)
* **#8:** add standard ccov excluded directories by default
  ([a8aabb3](http://github.com/abdes/asap/commit/a8aabb31d3ea6b0c5a50e13bf366f092ca724537)),
  closes [#8](http://github.com/abdes/asap/issues/8)
* add alaises used by cmake common functions
  ([9c33906](http://github.com/abdes/asap/commit/9c339069acd9ab6355f8156f2e8eaf81c382342c))
* alias variable to enable/disable building tests
  ([3992b0f](http://github.com/abdes/asap/commit/3992b0f7d500e653532bd0f206489058d99ad2d0))
* define asap_top_level_install as empty when project install should be skipped
  ([616deed](http://github.com/abdes/asap/commit/616deed7f2655cf6690135ed1914f7eec8053373))
* typo in variable name to enable/disable building tests
  ([9950fe2](http://github.com/abdes/asap/commit/9950fe2dcbe6c284e9ce32ce6a455e4a3a499ec4))
* use correct links for documentation
  ([486144c](http://github.com/abdes/asap/commit/486144c46222c22861b0a14f9dc002d148a31f24)),
  closes [#4](http://github.com/abdes/asap/issues/4)
* use only white-listed properties for interface library
  ([227de02](http://github.com/abdes/asap/commit/227de026878beb9dd9679d0cad12cf25bce16c4a))

### Documentation

* add badge for OpenSSF best practices
  ([26c01c8](http://github.com/abdes/asap/commit/26c01c8bcf98c6b47e6622dea91a6c6e10bc978c))
* add CPM as preferred way of managing third party deps
  ([5a33f70](http://github.com/abdes/asap/commit/5a33f70a15a64c84f0a13b4286460f9df20459a5))

* add last-updated-on timestamp
  ([d3e5ec3](http://github.com/abdes/asap/commit/d3e5ec39d7be787b77a38c9db6ae4f6f966d0589))
* add tutorial videos
  ([cb13248](http://github.com/abdes/asap/commit/cb13248244cddd0dc2c187893556fad7aa4f08b7))

- fix thumbnail and links of project docs video
  ([1a6269e](http://github.com/abdes/asap/commit/1a6269eef8999504aba8105d4c446a93e41c988b))
* how to report security vulnerabilities
  ([46426e9](http://github.com/abdes/asap/commit/46426e9d44f3c4e8ee0b3fdd98e2ee56d13f8890))
* improve the key features section
  ([79119ba](http://github.com/abdes/asap/commit/79119ba52f578a28dfdeb1ce59bba67c3fbcd3c1))
* include build status badges for all branches
  ([2b98ae1](http://github.com/abdes/asap/commit/2b98ae11ace8fa756c825686018a3a328ce27eca))
* revamp the project README
  ([e72c4c3](http://github.com/abdes/asap/commit/e72c4c3288d565b34b137ab785abe90370052258))
* rewrite the contributing section
  ([c7e39c4](http://github.com/abdes/asap/commit/c7e39c4cfa6033aac42befe5ed994089e601b6a0))
* update instructions for repo from template scenario
  ([1cafdb5](http://github.com/abdes/asap/commit/1cafdb57f86a4b61a736b3411791ae96ca684f33))
* update project docs video
  ([c7f79fc](http://github.com/abdes/asap/commit/c7f79fc64900cfa9ec3d2466300d1d32830b32f1))

## [2.0.4](http://github.com/abdes/asap/compare/v2.0.3...v2.0.4) (2022-03-15)

* speedup build and CI actions by removing unnecessary dependency on Google Test
  and the apt-get update step.

### Bug Fixes

* only add sanitizers if building tests
  ([182d039](http://github.com/abdes/asap/commit/182d0399ee47989d356a3cc3a6a07d1b487b5e86))
* use variable for checking if project must install targets
  ([3c4b088](http://github.com/abdes/asap/commit/3c4b088e4952634af6b27d2742ec6f68d07365c8))

## [2.0.3](http://github.com/abdes/asap/compare/v2.0.2...v2.0.3) (2022-03-07)

### Bug Fixes

* enable code coverage all targets
  ([2399bc3](http://github.com/abdes/asap/commit/2399bc30297609ad90746e7926063faa91722a6a))

## [2.0.2](http://github.com/abdes/asap/compare/v2.0.1...v2.0.2) (2022-03-06)

docs: add last-updated-on timestamp

## [2.0.1](http://github.com/abdes/asap/compare/v2.0.0...v2.0.1) (2022-03-06)

### Bug Fixes

* define asap_top_level_install as empty when project install should be skipped
  ([593da1e](http://github.com/abdes/asap/commit/593da1e93209a9fba5b5d4fbe730ba50068b02c4))
* incorrect chapter heading
  ([c716b18](http://github.com/abdes/asap/commit/c716b1843e4327bb2ebb928ca833333ae0613427))
* incorrect project title
  ([aaa5331](http://github.com/abdes/asap/commit/aaa5331fd9e9aeb041e45f34eb5a5ae3ae401109))
* wrong links were still being used
  ([166a996](http://github.com/abdes/asap/commit/166a996f6bd9bdd487623a0e549e453978f47aa0))

## 2.0.0 (2022-03-06)

This is a major refactoring of the `asap` family of projects and as such
introduces several breaking changes. The following detailed change log is not
entirely relevant as many of the modules have been extracted in the final stage
out of `common` into their own projects. The history is here for continuity from
the old `asap` projects.

### ⚠ BREAKING CHANGES

* The state machine library is now in its own separate module to keep the common
  module as small as possible. The api can be used via <fsm/fsm.h> instead of
  previously <<common/fsm.h>.
* Using exceptions to report completion or events not being consumed results in
  significant overhead on the FSM due to exception handling and a loss of
  performance. Changes were made to the API and implementation to make state
  `OnLeave` and `OnEnter` return a Status and to let the action `Execute` method
  also return a status.
* The logging `Registry` is now implemented as a singleton class and therefore
  it needs to be accessed via its instance() method. All other methods in its
  interface are not static anymore.
* Prefix the options with `ASAP_` to make them unique and avoid clashing with
  other projects that may use the generic `OPTION_xxx` names. Additionally, the
  build presets now always activate building of tests and examples except in
  release builds where examples are not built.
* This option is no longer relevant as we believe that 3rd party dependencies
  should be installed using their own projects. In the wrostcase scenario, they
  should be explicitly added as install instructions to the project in a visible
  and documented way.
* The project requires C++17 as it is widely available in compilers now. Logical
  traits such as conjunction, disjunction and negation are available from the
  <type_traits> standard include.
* major redesign of the cmake build system, many macros and functions have been
  changed and the build system overall has been simplified. Refer to the
  documentation for more information.
* `catch2` has been replaced by Google Test/Mock, which provide more features,
  less compiler earnings and are more popular. Catch2 or any other framework can
  still be easily added and used to an `asap` based project.
* `hedley` was removed from `common` and was replaced by a much lighter new file
  `compilers.h`.

- `nowide` was removed from `common` and will be replaced by the standalone
  boost nowide library when needed.
* `filesystem` footprint is too large to be included by default in `asap`
  starter project. It will be provided separately and a mechanism to easily add
  it into an `asap` based project will be implemented in a future update.

* logging is in a new module: asap::logging.

Many modules would want to only get the basic common functionality without
pulling extra 3rd party dependencies such as spdlog, fmt etc... For this reason,
the logging functionality is taken out of the common submodule and moved to
logging submodule.

* logging is in a new module: asap::logging.

Many modules would want to only get the basic common functionality without
pulling extra 3rd party dependencies such as spdlog, fmt etc... For this reason,
the logging functionality is taken out of the common submodule and moved to
logging submodule.

### Features

* add gsl library
  ([9b982f1](http://github.com/abdes/asap/commit/9b982f17aeb9362619cf871ed9bbedb65344ab43))
* add support for .editorconfig
  ([5a7a689](http://github.com/abdes/asap/commit/5a7a6892f7c05798e79c6f81e9eef3b0a6256ca1))
* add support for CMake presets
  ([bdcfa4d](http://github.com/abdes/asap/commit/bdcfa4d6a0cfffe0026af39b635c6dcd4e61e3a8))
* add support for Conventional Commits and auto Changelog
  ([7b827fa](http://github.com/abdes/asap/commit/7b827fab2ae28ba903c69ab5acdf249cb3e55d85))
* contract checking api (assertions)
  ([c691446](http://github.com/abdes/asap/commit/c691446fd18242840e62529f1aabdaf8480b7ec6))
* doxygen snippets from `test` or `examples` source directories
  ([85b8000](http://github.com/abdes/asap/commit/85b8000e91dd105c0f90a62b1824957b68ce9c03))
* lightweight mixin support library
  ([84b4ae8](http://github.com/abdes/asap/commit/84b4ae85033ec105ab5ce8cccbb9d5991c39146e))
* msvc build on windows
  ([d7eccb8](http://github.com/abdes/asap/commit/d7eccb8b2bb69353b984080746294b3efa88785d))
* overload pattern for variant visitation on the fly
  ([53ea7cc](http://github.com/abdes/asap/commit/53ea7cc74e89913cbf59eda2e30bd36c356e6acd))
* provide a way to distinguish between debug and release builds via preprocessor
  define
  ([bbd84a2](http://github.com/abdes/asap/commit/bbd84a2c32c9833f79b442e202b647f93946b105))
* replace cmake compiler detection with hedley
  ([8bf0a3d](http://github.com/abdes/asap/commit/8bf0a3d53fcdba65497491cbd63c1dcffcba8467))
* State Machine implementation library
  ([55278fa](http://github.com/abdes/asap/commit/55278fab0559512679a4c9ecf1f5dd04e192e1b4))
* text wrapping module
  ([8cece41](http://github.com/abdes/asap/commit/8cece41e3c63c9ccae9888cb694cb821f43dfdca))

### Bug Fixes

* "-Wreserved-identifier" only if not APPLE
  ([05fac12](http://github.com/abdes/asap/commit/05fac12d37978c6651c299e6ad1cc64dfed88fa0))
* adjust doc target names to work in renamed projects
  ([60acc65](http://github.com/abdes/asap/commit/60acc65fcc8d529a69f3617d792376be3e54b6ce))
* always use top level build dir for output
  ([1b01db2](http://github.com/abdes/asap/commit/1b01db2402bc52944646bcde3cf525315a4e0e1b))
* cmake option was placed in the wrong command
  ([b634b15](http://github.com/abdes/asap/commit/b634b153db975a8bc8715e82f7fafdc214504cfa))
* cmake require c++ 14 in all modules
  ([f05c9a6](http://github.com/abdes/asap/commit/f05c9a63e97dbcbef3e7d8188a04e719e2247d62))
* configure compilation database for clangd when using cmake presets
  ([7493c24](http://github.com/abdes/asap/commit/7493c240ce97396040d9a7bd09cb32ed56ea2340))
* contract api docs now in contract module
  ([d3366bd](http://github.com/abdes/asap/commit/d3366bd846d66486b2fcf98f36fd741452be8516))
* **doc:** wrong chapter title in logging module page
  ([5966912](http://github.com/abdes/asap/commit/59669122d3ea8565878667e6f09b124bc7da1b99))
* doxygen and sphinx target conflict with modules
  ([02375ff](http://github.com/abdes/asap/commit/02375ff4a33e34a8e0cb9307ef4eb6de3271e945))
* doxygen doc generation uses wrong module info
  ([8833474](http://github.com/abdes/asap/commit/8833474402c523a3f2eda10b8927da46989f4bba))
* export members instead of whole class to accomodate MSVC STL in DLL
  restrictions
  ([eb504b8](http://github.com/abdes/asap/commit/eb504b85f6ac5dafd84002c25655e7ba97e57980))
* generate doc only if project is master
  ([82190fa](http://github.com/abdes/asap/commit/82190fa6562f5e51dbbab660bcab8dc265e99a0b))
* hardcode `asap` in places where we should not use the custom project name
  ([7f81298](http://github.com/abdes/asap/commit/7f81298b31e5a235bf4bce4778525a2e4594befa))
* include CTest module
  ([4cffc36](http://github.com/abdes/asap/commit/4cffc3680e217a8ede659fd030306ea2243b013c))
* keep `src` even when empty for doxygen not to complain
  ([be28f42](http://github.com/abdes/asap/commit/be28f429eddde8f258a08e84722e4fcaf975b384))
* make ctest work again
  ([0f3cac0](http://github.com/abdes/asap/commit/0f3cac0d85e5c38bf076aa663bb4decd3430f319))
* make doxygen targets sub-project friendly
  ([546fe73](http://github.com/abdes/asap/commit/546fe73ded53721dddbac311e9db41e4146b8ad2))
* make gtest work again
  ([3ce658c](http://github.com/abdes/asap/commit/3ce658c5f1eb216a3286717e7f80827b96ff3b49))
* make sphinx targets sub-project friendly
  ([024cc77](http://github.com/abdes/asap/commit/024cc77d17ed134ed5f3f4eea32226b07b05aad6))
* match Clang and Apple Clang for compiler options
  ([7e1e123](http://github.com/abdes/asap/commit/7e1e12317b62099bb58ce5dd4adfdbf1a759ad03))
* merge changes from upstream asap
  ([8eabccd](http://github.com/abdes/asap/commit/8eabccddfc9f5ffdb80f48f3b76076943dd59c22))
* need to hardoce `asap` when linking `common`
  ([e038a70](http://github.com/abdes/asap/commit/e038a702ce8727fa1a6c8b3a45cb4bb211281db5))
* only add clang-format/tidy targets if master project
  ([060f082](http://github.com/abdes/asap/commit/060f082714e039eb4c2c2e198b5caed74690e8af))
* only add sanitizers if building tests
  ([c98881c](http://github.com/abdes/asap/commit/c98881c3ec555067b8876e78ddd594c788d0cb1e))
* only install files if requested to install
  ([9caaf9b](http://github.com/abdes/asap/commit/9caaf9b47e138be3f9845d6d58ebc21ff8dfa83b))
* paragraph marks surrounded by white spaces not properly tokenized
  ([7dc72f8](http://github.com/abdes/asap/commit/7dc72f8d3f5319c283d0e8bd0b0a1b04cc7d4687))
* put noexcept specifications where it makes sense
  ([f1c1036](http://github.com/abdes/asap/commit/f1c1036f7088d1318f31b596b4838dc2c807bc4b))
* remove axiom from the contrcat check apis
  ([5000c96](http://github.com/abdes/asap/commit/5000c9697e89e369c1f4dc5bdd11dc4efa2878fe))
* remove reference to thread local
  ([f912630](http://github.com/abdes/asap/commit/f912630220900ed556d7dd6c2609ef17242b56df))
* remove trailing comma
  ([3d8ca08](http://github.com/abdes/asap/commit/3d8ca08a1ddc39856d606cdea67a307eafae7cce))
* removed reference to thread local
  ([7152ae8](http://github.com/abdes/asap/commit/7152ae876a9aa90fb361314a29d60ebcf2e44aba))
* reorganize third_party modules for use of FetchContent
  ([cc65bc2](http://github.com/abdes/asap/commit/cc65bc2219dbe38197107bae71252444994e118c))
* undefined symbol in release build due to inlining of function
  ([e45a8eb](http://github.com/abdes/asap/commit/e45a8eb088767bf3a702a169f04346c082f1472c))
* use clang pragma when clang is the compiler
  ([4ad38e4](http://github.com/abdes/asap/commit/4ad38e42c4657640259640e60c8c38292aed9ce1))
* use correct path for the master docs
  ([2322694](http://github.com/abdes/asap/commit/2322694cecbf4931812fee7dc24384f90235290f))
* use correct tagets for doc builds
  ([559558e](http://github.com/abdes/asap/commit/559558e8eac3043eef19986cc2ae6d6dfd937be8))
* use correct tagets for doc builds
  ([0d7049f](http://github.com/abdes/asap/commit/0d7049f1c22ba808dd62922995f5ee23cb0641f1))
* use correct url for logo image
  ([96d1e01](http://github.com/abdes/asap/commit/96d1e01d971bd2f33faaebfc060082023f3a5209))
* use correct url for master index page
  ([a56c327](http://github.com/abdes/asap/commit/a56c327ff3d7ab14d7a499fc4997279efd2647fe))
* use lower case META_PROJECT_ID
  ([311e433](http://github.com/abdes/asap/commit/311e433e8698ff6385c2cda256bff83982596ed0))
* use lower-case name for sphinx
  ([f3005b5](http://github.com/abdes/asap/commit/f3005b5bd4055b16a57cdcb3af70a2f32b1c5809))
* use separate sphinx cache dir for each module
  ([03f36fc](http://github.com/abdes/asap/commit/03f36fc96c78c51b441feb9a7b9c70d19a2125c7))
* wrong variable used for target name
  ([829f351](http://github.com/abdes/asap/commit/829f351d22b384ddc060ae2df47ff9e801089dd2))
* clean the logging API implementation
  ([25535c7](http://github.com/abdes/asap/commit/25535c76c0586d53f7c6c55db250a251f0c5390b))
* convert git submodule to local module
  ([4e32e8a](http://github.com/abdes/asap/commit/4e32e8a6d1152413af12c7013ee759eca5e2d51d))
* convert unit testing to gtest/gmock
  ([b99c8d0](http://github.com/abdes/asap/commit/b99c8d0a315bb8200ca9cec93c9d5f64880c9271))
* extract fsm module out of common
  ([0269f2d](http://github.com/abdes/asap/commit/0269f2d6949c063f8c4c3b300b46aca76ff398b1))
* make the options to build tests and examples unique
  ([3a35b79](http://github.com/abdes/asap/commit/3a35b79ec23c0c4828832d6bf81f433d53b17fc9))
* move logging functionality to separate module
  ([0d1ca72](http://github.com/abdes/asap/commit/0d1ca7276bb38962c6d6cbdc604d949ca18d05cc))
* move logging functionality to separate module
  ([46f4dd9](http://github.com/abdes/asap/commit/46f4dd96edb1148e0772a1539b989fd80f3821e4))
* redesign cmake build system
  ([31ce14a](http://github.com/abdes/asap/commit/31ce14a301ac2e725b7760581e696f089225b161))
* remove filesystem submodule
  ([e2089ae](http://github.com/abdes/asap/commit/e2089ae7707c1448c78db23db2f53cbfab461599))
* remove logical traits backport
  ([5ed0fe6](http://github.com/abdes/asap/commit/5ed0fe6e9e03399e640221a285f87a1a8a015cd1))
* remove OPTION_SELF_CONTAINED cmake cache variable
  ([3c4e0e5](http://github.com/abdes/asap/commit/3c4e0e55b3dc92eb5ea9ede076c726658a964a34))
* restrict exceptions to error reporting
  ([014b96b](http://github.com/abdes/asap/commit/014b96bdafa644e047b0b174f84063cea7908e03))
