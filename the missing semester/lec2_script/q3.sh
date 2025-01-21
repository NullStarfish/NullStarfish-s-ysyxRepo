#!/usr/bin/bash

count=0

while (( $? == 0 ))
do
	count=$[$count+1]
	./q3test.sh > ./q3.log 2>&1
done
count=$[$count-1]

echo "failed after $count times" >> ./q3.log
cat q3.log
