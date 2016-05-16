#!/bin/bash
make clean
cd .. && find . -iwholename "*cmake*" -not -name CMakeLists.txt -not -name "Find*.cmake" -delete
echo Cleaned!
