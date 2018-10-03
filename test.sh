#!/bin/sh

gcc seq.c -oseq &&
gcc read.c -oread &&
time sh -c './seq 60000 | ./read'
