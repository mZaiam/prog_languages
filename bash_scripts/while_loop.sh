#!/bin/bash

i=1

while [[ $i -le 10 ]]
do
	echo "Line $i" >> $1.txt
	(( i+=1 ))
done
