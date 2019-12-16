#!/bin/bash
wget -P .. https://github.com/GiovanniAyala/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/adv.so
export LD_PRELOAD="$PWD/adv.so"
