#!/bin/bash
DIR=/tmp/shared
mkdir -p "$DIR"
chmod 777 "$DIR"
find ~/ -name "*.txt" -type f | tree
