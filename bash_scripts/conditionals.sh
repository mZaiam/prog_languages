#!/bin/bash

echo "Insert a number:"

read NUMBER

if [ $NUMBER -gt 0 ]
then
	echo "$NUMBER is greater than zero."
elif [ $NUMBER -lt 0 ]
then
	echo "$NUMBER is lower than zero."
else
	echo "$NUMBER is zero."
fi
