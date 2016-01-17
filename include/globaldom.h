/*  =========================================================================
    globdom - Global Domination public header

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of the Global Domination Project.
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef __GLOBDOM_H_INCLUDED__
#define __GLOBDOM_H_INCLUDED__

//  External dependencies
#include <czmq.h>

//  GLOBDOM version macros for compile-time API detection
#define GLOBDOM_VERSION_MAJOR 0
#define GLOBDOM_VERSION_MINOR 1
#define GLOBDOM_VERSION_PATCH 0

#define GLOBDOM_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define GLOBDOM_VERSION \
    GLOBDOM_MAKE_VERSION(GLOBDOM_VERSION_MAJOR, \
    GLOBDOM_VERSION_MINOR, \
    GLOBDOM_VERSION_PATCH)

//  Opaque class structures to allow forward references
typedef struct _gdom_server_t gdom_server_t;

//  Public API classes
#include "gdom_server.h"

#endif
