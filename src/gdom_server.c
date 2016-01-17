/*  =========================================================================
    gdom_server - Global Domination service

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the Global Domination Project.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

/*
@header
    This class aims for Global Domination. At present it does nothing.
@discuss
    Global Domination may take a while. We will work on the basis of
    pull requests.
@end
*/

#include "gdom_classes.h"

//  Structure of our class

struct _gdom_server_t {
    int filler;         //  Got nothing
};

//  --------------------------------------------------------------------------
//  Create a new global domination service.

gdom_server_t *
gdom_server_new (void)
{
    gdom_server_t *self = (gdom_server_t *) zmalloc (sizeof (gdom_server_t));
    assert (self);
    return self;
}


//  --------------------------------------------------------------------------
//  Destroy a global domination service.

void
gdom_server_destroy (gdom_server_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        gdom_server_t *self = *self_p;
        free (self);
        *self_p = NULL;
    }
}


//  --------------------------------------------------------------------------
//  Self test of this class

void
gdom_server_test (bool verbose)
{
    printf (" * gdom_server: ");
    //  @selftest
    gdom_server_t *server = gdom_server_new ();
    gdom_server_destroy (&server);
    //  @end
    printf ("OK\n");
}
