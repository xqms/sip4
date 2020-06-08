# -*- coding: utf-8 -*-
#
# SIP documentation build configuration file, created by
# sphinx-quickstart on Sat May 30 14:28:55 2009.
#
# This file is execfile()d with the current directory set to its containing dir.
#
# Note that not all possible configuration values are present in this
# autogenerated file.
#
# All configuration values have a default; values that are commented out
# serve to show the default.

import datetime
import os
import sys

# If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#sys.path.append(os.path.abspath('.'))

# -- General configuration -----------------------------------------------------

# Add any Sphinx extension module names here, as strings. They can be extensions
# coming with Sphinx (named 'sphinx.ext.*') or your custom ones.
#extensions = []

# Add any paths that contain templates here, relative to this directory.
templates_path = ['templates']

# The suffix of source filenames.
source_suffix = '.rst'

# The encoding of source files.
#source_encoding = 'utf-8'

# The master toctree document.
master_doc = 'index'

# General information about the project.
project = 'SIP'
copyright = '{0} Riverbank Computing Limited'.format(
        datetime.date.today().year)

# The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '4.19.23'
# The full version, including alpha/beta/rc tags.
release = '4.19.23'

# The language for content autogenerated by Sphinx. Refer to documentation
# for a list of supported languages.
#language = None

# There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'

# List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['html']

# The reST default role (used for this markup: `text`) to use for all documents.
#default_role = None

# If true, '()' will be appended to :func: etc. cross-reference text.
#add_function_parentheses = True

# If true, the current module name will be prepended to all description
# unit titles (such as .. function::).
#add_module_names = True

# If true, sectionauthor and moduleauthor directives will be shown in the
# output. They are ignored by default.
#show_authors = False

# The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'

# A list of ignored prefixes for module index sorting.
#modindex_common_prefix = []


# -- Options for HTML output ---------------------------------------------------

# The theme to use for HTML and HTML Help pages.
html_theme = 'riverbank'

# Add any paths that contain custom themes here, relative to this directory.
html_theme_path = ['.']

# The name for this set of Sphinx documents.  If None, it defaults to
# "<project> v<release> documentation".
html_title = "%s v%s Reference Guide" % (project, release)

# Output file base name for HTML help builder.
htmlhelp_basename = 'SIPdoc'


# -- Project-specific extensions -----------------------------------------------

def setup(app):
    """ Define roles specific to SIP. """

    app.add_object_type('argument-annotation', 'aanno',
            indextemplate='single: %s (argument annotation)')

    app.add_object_type('class-annotation', 'canno',
            indextemplate='single: %s (class annotation)')

    app.add_object_type('enum-annotation', 'eanno',
            indextemplate='single: %s (enum annotation)')

    app.add_object_type('exception-annotation', 'xanno',
            indextemplate='single: %s (exception annotation)')

    app.add_object_type('function-annotation', 'fanno',
            indextemplate='single: %s (function annotation)')

    app.add_object_type('mapped-type-annotation', 'manno',
            indextemplate='single: %s (mapped type annotation)')

    app.add_object_type('typedef-annotation', 'tanno',
            indextemplate='single: %s (typedef annotation)')

    app.add_object_type('variable-annotation', 'vanno',
            indextemplate='single: %s (variable annotation)')

    app.add_object_type('sip-type', 'stype',
            indextemplate='single: %s (SIP type)')

    app.add_crossref_type('directive', 'directive',
            indextemplate='single: %s (directive)')
