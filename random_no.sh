#!/bin/bash
#
# Generate random numbers and add them
#------------------------------------------
prog=$0
SHUF=/usr/bin/shuf
echo "== $prog run by `whoami` from `hostname -f` on `date`"
echo "=== Generate random numbers and add them"
s10=`$SHUF -i 1-10|awk 'BEGIN {s=0} {s += $NF} END {print s}'`
s100=`$SHUF -i 1-100 | awk 'BEGIN {s=0} {s += $NF} END {print s}'`
s1000=`$SHUF -i 1-1000 | awk 'BEGIN {s=0} {s += $NF} END {print s}'`
echo "++ First 10 sum: $s10"
echo "++ First 100 sum: $s100"
echo "++ First 1000 sum: $s1000"
uptime
# all done
