#! /bin/bash
echo "Rebuilding Global Domination..."
gcc src/gdom_selftest.c src/gdom_server.c -o src/gdom_selftest -lczmq
src/gdom_selftest
