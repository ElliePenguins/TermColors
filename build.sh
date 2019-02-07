#!/bin/bash

# TODO: proper build/install script.

gcc -c -fPIC colors.c -o colors.o
gcc colors.o -shared -o termcolors.so
