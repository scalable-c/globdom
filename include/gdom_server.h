/*  =========================================================================
    gdom_server - Global Domination service

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of the Global Domination Project.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef GDOM_SERVER_H_INCLUDED
#define GDOM_SERVER_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @interface
//  Create a new global domination service.
gdom_server_t *
    gdom_server_new (void);

//  Destroy a global domination service.
void
    gdom_server_destroy (gdom_server_t **self_p);

//  Self test of this class
void
    gdom_server_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif
