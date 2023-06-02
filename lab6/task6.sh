#!/bin/bash

gcc task6.c -o task6
./task6 &> /dev/null &
ps -axjf | grep task6
kill -9 $(ps aux | grep task6 | awk '{ print $2 }')
