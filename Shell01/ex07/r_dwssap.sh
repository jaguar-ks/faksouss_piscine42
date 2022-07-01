#!/bin/bash
cat /etc/passwd | grep -v '\#' | awk "NR%2==0" | cut -d ":" -f1 | rev | sort -r | awk -v FT_LINE1=$line1 -v FT_LINE2=line2 'NR>=FT_LINE1 && NR<=FT_LINE2 {print $0 ", "}' | tr -d '\n' | sed 's/, $/./' | tr -d '\n'
