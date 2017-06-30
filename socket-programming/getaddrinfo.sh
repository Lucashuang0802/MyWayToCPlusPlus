#!/bin/sh

set -e

clang++ -std=c++11 -stdlib=libc++ getaddrinfo.cpp -o showip

./showip www.example.net
./showip www.focushuang.com

