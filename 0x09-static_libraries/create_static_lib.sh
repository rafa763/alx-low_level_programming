#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -std=gnu89 *.c
ar rc liball.a *.o
ranlib liball.a
