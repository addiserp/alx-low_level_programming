#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
nm -D libdynamic.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
ldd len
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
./len
