/*
Copyright Redshift Software, Inc. 2008-2013
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.lslboost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_IBM_H
#define BOOST_PREDEF_COMPILER_IBM_H

#include <lslboost/predef/version_number.h>
#include <lslboost/predef/make.h>

/*`
[heading `BOOST_COMP_IBM`]

[@http://en.wikipedia.org/wiki/VisualAge IBM XL C/C++] compiler.
Version number available as major, minor, and patch.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`__IBMCPP__`] [__predef_detection__]]
    [[`__xlC__`] [__predef_detection__]]
    [[`__xlc__`] [__predef_detection__]]

    [[`__COMPILER_VER__`] [V.R.P]]
    [[`__xlC__`] [V.R.P]]
    [[`__xlc__`] [V.R.P]]
    [[`__IBMCPP__`] [V.R.P]]
    ]
 */

#define BOOST_COMP_IBM BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if defined(__IBMCPP__) || defined(__xlC__) || defined(__xlc__)
#   undef BOOST_COMP_IBM
#   if !defined(BOOST_COMP_IBM) && defined(__COMPILER_VER__)
#       define BOOST_COMP_IBM BOOST_PREDEF_MAKE_0X_VRRPPPP(__COMPILER_VER__)
#   endif
#   if !defined(BOOST_COMP_IBM) && defined(__xlC__)
#       define BOOST_COMP_IBM BOOST_PREDEF_MAKE_0X_VVRR(__xlC__)
#   endif
#   if !defined(BOOST_COMP_IBM) && defined(__xlc__)
#       define BOOST_COMP_IBM BOOST_PREDEF_MAKE_0X_VVRR(__xlc__)
#   endif
#   if !defined(BOOST_COMP_IBM)
#       define BOOST_COMP_IBM BOOST_PREDEF_MAKE_10_VRP(__IBMCPP__)
#   endif
#endif

#if BOOST_COMP_IBM
#   define BOOST_COMP_IBM_AVAILABLE
#endif

#define BOOST_COMP_IBM_NAME "IBM XL C/C++"

#include <lslboost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_COMP_IBM,BOOST_COMP_IBM_NAME)


#endif
