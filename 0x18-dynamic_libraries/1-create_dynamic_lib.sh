#!/bin/bash
gcc *c -C -fPIC
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
