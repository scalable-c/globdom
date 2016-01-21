/*  =========================================================================
    gdomd - Global Domination Demon

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of Global Domination. Resistance is useless.     
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

/*
@header
    gdomd - Global Domination Demon
@discuss
@end
*/

#include "gdom_classes.h"

int main (int argc, char *argv [])
{
    puts ("gdomd - Global Domination Demon");
    bool verbose = false;
    int argn;
    for (argn = 1; argn < argc; argn++) {
        if (streq (argv [argn], "--help")
        ||  streq (argv [argn], "-h")) {
            puts ("gdomd [options] ...");
            puts ("  --verbose / -v         verbose test output");
            puts ("  --help / -h            this information");
            return 0;
        }
        else
        if (streq (argv [argn], "--verbose")
        ||  streq (argv [argn], "-v"))
            verbose = true;
        else {
            printf ("Unknown option: %s\n", argv [argn]);
            return 1;
        }
    }
    if (verbose)
        zsys_info ("Welcome to Global Domination v%d.%d",
                    GDOM_VERSION_MAJOR, GDOM_VERSION_MINOR);
    zsys_info ("starting Global Domination server...");
    gdom_server_t *server = gdom_server_new ();
    assert (server);
    while (!zsys_interrupted) {
        sleep (1);
    }
    zsys_info ("terminating Global Domination server...");
    gdom_server_destroy (&server);

    return 0;
}
