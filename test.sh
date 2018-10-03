#!/bin/bash

rm -f seq seq.exe read read.exe &&
gcc -O2 seq.c -oseq &&
gcc -O2 read.c -oread &&
time sh -c './seq 10000 | ./read'
