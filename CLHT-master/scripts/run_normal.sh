#!/bin/sh

# lat="_lat";

e1="hyht$lat";
e2="hyht_linked$lat";
e3="lfht_res$lat";

es="$e1 $e2 $e3";

for e in $es;
do
    printf " ---------------------------------------------------------------------------------------------------------------------------|| %-30s \n" $e
    ./$e $@;
done;