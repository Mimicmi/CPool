#!/bin/bash

cat Day02/passwd | cut -d ":" -f1 | sed -n '0~2p' | rev | sort | tac | sed -n "${MY_LINE1},${MY_LINE2}p" | tr \\n ', ' | sed 's/,/, /g' | sed '$s/,.$/.\n/'
