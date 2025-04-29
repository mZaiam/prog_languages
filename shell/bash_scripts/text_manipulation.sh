#!bin/bash

echo "File Size | File Name"
cat $1 | awk '{print $5, $9}' | sort -n

