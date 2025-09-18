#!/bin/sh

FT_LINE1=3
FT_LINE2=9

cat /etc/passwd | \grep -v '^#' | \awk -F: 'NR % 2 == 0 {print $1}' | \sed -n "${FT_LINE1},${FT_LINE2}p" | \rev | \sort -r | \paste -sd ', ' - | \sed 's/, $//' | \sed 's/$/,./'
