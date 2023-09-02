#! /bin/bash
gcc *.c -O *.o
ar rcs liball.a *.o
