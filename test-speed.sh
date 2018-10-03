#!/bin/bash

rm -f speed speed.exe &&
gcc -O2 speed.c -ospeed &&
time ./speed
