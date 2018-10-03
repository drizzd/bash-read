#!/bin/bash

rm -f seq seq.exe &&
gcc -O2 seq.c -oseq &&
time sh -c './seq 10000 | while read -r line; do :; done'
