/*
Copyright Redshift Software, Inc. 2008-2013
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.lslboost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_OS_AMIGAOS_H
#define BOOST_PREDEF_OS_AMIGAOS_H

#include <lslboost/predef/version_number.h>
#include <lslboost/predef/make.h>

/*`
[heading `BOOST_OS_AMIGAOS`]

[@http://en.wikipedia.org/wiki/AmigaOS AmigaOS] operating system.

[table
    [[__predef_symbol__] [__predef_version__]]

    [[`AMIGA`] [__predef_detection__]]
    [[`__amigaos__`] [__predef_detection__]]
    ]
 */

#define BOOST_OS_AMIGAOS BOOST_VERSION_NUMBER_NOT_AVAILABLE

#if !BOOST_PREDEF_DETAIL_OS_DETECTED && ( \
    defined(AMIGA) || defined(__amigaos__) \
    )
#   undef BOOST_OS_AMIGAOS
#   define BOOST_OS_AMIGAOS BOOST_VERSION_NUMBER_AVAILABLE
#endif

#if BOOST_OS_AMIGAOS
#   define BOOST_OS_AMIGAOS_AVAILABLE
#   include <lslboost/predef/detail/os_detected.h>
#endif

#define BOOST_OS_AMIGAOS_NAME "AmigaOS"

#include <lslboost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_OS_AMIGAOS,BOOST_OS_AMIGAOS_NAME)


#endif
