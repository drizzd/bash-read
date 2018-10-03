#!/bin/sh

rm -f pipew pipew.exe child child.exe
g++ pipew.cpp -opipew &&
g++ child.cpp -ochild &&
./pipew text.txt
