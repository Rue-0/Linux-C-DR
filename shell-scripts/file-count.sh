#!/bin/bash

read -p "Enter a directory: " DIR

echo "File counts for $DIR:" | tee file-count.log

echo "Text files:" | tee -a file-count.log
find "$DIR" -type f -name "*.txt" | wc -l | tee -a file-count.log

echo "Shell scripts:" | tee -a file-count.log
find "$DIR" -type f -name "*.sh" | wc -l | tee -a file-count.log

echo "C files:" | tee -a file-count.log
find "$DIR" -type f -name "*.c" | wc -l | tee -a file-count.log
