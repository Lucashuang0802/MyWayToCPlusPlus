#!/bin/sh

set -e

clang++ -std=c++11 -stdlib=libc++ firstCpp.cpp -o firstCpp

clang++ -std=c++11 -stdlib=libc++ file.cpp -o file
./file

cd socket-programming/
sh getaddrinfo.sh
