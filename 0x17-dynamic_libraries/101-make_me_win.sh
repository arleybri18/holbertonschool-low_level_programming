#/bin/bash
wget -q -O /tmp/rand.so https://github.com/arleybri18/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/rand.so
export LD_PRELOAD=/tmp/rand.so
