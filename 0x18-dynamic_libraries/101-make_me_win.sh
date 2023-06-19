#!/bin/bash
wget -O win.so https://github.com/DeeSungu/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=$(pwd)/win.so
