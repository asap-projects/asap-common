.. Structure conventions
     # with overline, for parts
     * with overline, for chapters
     = for sections
     - for subsections
     ^ for sub-subsections
     " for paragraphs

############################
ASAP common's documentation!
############################

.. |date| date::

Last Updated on |date|

.. toctree::
   :maxdepth: 2
   :titlesonly:
   :hidden:

   common/index
   tools/index
   license
   changelog.md
   version

Welcome! This is the documentation for the
`asap-common <https://github.com/asap-projects/asap-common>`_ |version| project.

This project uses the `asap <https://github.com/abdes/asap>`_ integrated build
system and follows its documentation framework and development workflow.

Parts of the documentation
==========================

:doc:`Module: common <common/index>`
------------------------------------
*start here to understand the module design, its public APIs and see examples of
how to use them.*

`Developer Guides <https://abdes.github.io/asap/asap_master/html/project-development/index.html>`_
--------------------------------------------------------------------------------------------------
*head over to the `asap` project documentation for detailed guides on how to
build and maintain the different targets in this project.*

:doc:`Project Tools <tools/index>`
----------------------------------
*get an introduction to the programs and scripts under the `tools` folder,
specifically made for the `asap` project. These can simplify recurring tasks and
provide additional insights into the project, and sometimes examples of how to
use the project artifacts.*

Acknowledgements
================

.. figure:: https://executablebooks.org/en/latest/_static/logo-wide.svg
  :figclass: margin
  :alt: Executable Books Project
  :name: executable_book_logo

This documentation uses the theme provided by the `Executable Books Project
<https://executablebooks.org/>`_ Project.
