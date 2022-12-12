#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
nm -D libdynamic.so
