#!/bin/bash

function testcase() {
    cd $1
    echo
    echo "###### $1 ######"
    echo
    echo Compilation
    time $2 -O0 -std=c++14 *.cpp -o main.out
    echo
    echo Run
    time ./main.out
    cd ..
}

rm -Rf optimized_2
rm -Rf optimized
rm -Rf unoptimized
mkdir optimized_2
mkdir optimized
mkdir unoptimized

python3 generator.py $2 $3
testcase optimized_2 $1
testcase optimized $1
testcase unoptimized $1
