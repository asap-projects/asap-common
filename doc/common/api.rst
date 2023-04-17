.. Structure conventions
     # with overline, for parts
     * with overline, for chapters
     = for sections
     - for subsections
     ^ for sub-subsections
     " for paragraphs

*************
API reference
*************

.. |date| date::

Last Updated on |date|

.. toctree::
   :maxdepth: 2
   :hidden:

   Platform detection <api/platform>
   Compiler detection <api/compilers>
   Project meta properties <api/meta>

This module offers the following APIs:

:doc:`Platform detection <api/platform>`
========================================
*macros and compiler definitions to help identify the platform on which the code
is being compiled.*

:doc:`Compiler detection <api/compilers>`
=========================================
*macros and compiler definitions to help identify and use the compiler being
used to compile the code.*

:doc:`Project meta properties<api/meta>`
========================================
*project meta information, sych as name, version, description, etc. as defined
in the project top-level `CMakeLists.txt`.*
