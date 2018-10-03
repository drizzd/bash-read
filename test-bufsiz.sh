#!/bin/sh

echo '#include <stdio.h>' | gcc -E -dM - | grep BUFSIZ
