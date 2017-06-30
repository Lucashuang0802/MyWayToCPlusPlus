#!/bin/sh

set -e

clang++ -std=c++11 -stdlib=libc++ firstCpp.cpp -o firstCpp
