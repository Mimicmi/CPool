#!/bin/bash

gcc -Wall -c *.c
ar rc libmy.a *.o
ranlib libmy.a
