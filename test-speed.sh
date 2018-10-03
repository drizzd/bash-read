#!/bin/sh

rm -f speed speed.exe &&
gcc -O0 speed.c -ospeed &&
./speed
