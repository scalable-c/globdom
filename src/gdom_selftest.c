/*  =========================================================================
    gdom_selftest.c - run selftests

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of the Global Domination Project.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#include "gdom_classes.h"

int
main (void)
{
    gdom_server_test (false);
    return 0;
}
