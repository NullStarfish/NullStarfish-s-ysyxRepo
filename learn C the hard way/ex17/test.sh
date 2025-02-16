#!/bin/bash
set -e

echo "./ex17 db.dat c"
./ex17 db.dat c

echo "./ex17 db.dat s 1 zed zed@qq.com"
./ex17 db.dat s 1 zed zed@qq.com

echo "./ex17 db.bat s 2 frank frank@zedshaw.com"
./ex17 db.dat s 2 frank frank@zedshaw.com

echo "./ex17 db.dat l"
./ex17 db.dat l

echo "./ex17 db.dat d 1"
./ex17 db.dat d 1

echo "./ex17 db.dat g 2"
./ex17 db.dat g 2
