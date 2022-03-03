.. Structure conventions
     # with overline, for parts
     * with overline, for chapters
     = for sections
     - for subsections
     ^ for sub-subsections
     " for paragraphs

*********************************************
Platform and environment preprocessor symbols
*********************************************

The *common* module provides a number of preprocessor symbols that can be used
to detect the current platform and features available on it. These symbols are
present in the `common/platform.h` header file.

Operating System detection
==========================

The following symbols are defined/undefined based on the operating system on
which the module is being compiled.

   * ASAP_WINDOWS : OS is Windows
   * ASAP_WINDOWS_CYGWIN : OS is Windows, using cygwin
   * ASAP_WINDOWS_MINGW : OS is Windows, using MinGW 32 or 64bit
   * ASAP_UNIX : OS is a unix variant

     * ASAP_APPLE : OS is any of Apple variants (OS X, iOS, iOS simulator)

       * ASAP_APPLE_IOS_SIMULATOR : OS is Apple iOS is Xcode simulator
       * ASAP_APPLE_IOS : OS is Apple iOS
       * ASAP_APPLE_OSX : OS is Apple OS X

     * ASAP_BSD : OS is a BSD variant (FreeBSD, NetBSD, OpenBSD, DrangonFly,
       BSDI)
     * ASAP_CYGWIN : OS is CygWin not running on Windows
     * ASAP_LINUX : OS is a Linux variant

       * ASAP_GNU_LINUX : OS is GNU/Linux
       * ASAP_ANDROID : OS is the Android variant of Linux

     * ASAP_SUN : OS is an Oracle/SUN variant
     * ASAP_SUN_SOLARIS : OS is the Oracle/SUN Solaris
     * ASAP_SUN_SUNOS : OS is the Oracle/SUN SunOS
     * ASAP_HPUX : OS is HP-UX
     * ASAP_AIX : OS is IBM AIX

An example fo how to use these symbols is as following:

.. code-block:: c++

  #include <common/platform.h>

  #if defined(ASAP_WINDOWS)
  // do some windows specific things
  #elif defined(ASAP_LINUX)
  // do some Linux specific things
  #else
  // do generic things for the rest of the platforms
  #endif
