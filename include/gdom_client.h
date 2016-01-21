/*  =========================================================================
    gdom_client - class description

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of Global Domination. Resistance is useless.     
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef GDOM_CLIENT_H_INCLUDED
#define GDOM_CLIENT_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @interface
//  Create a new gdom_client
GDOM_EXPORT gdom_client_t *
    gdom_client_new (void);

//  Destroy the gdom_client
GDOM_EXPORT void
    gdom_client_destroy (gdom_client_t **self_p);

//  Self test of this class
GDOM_EXPORT void
    gdom_client_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif
