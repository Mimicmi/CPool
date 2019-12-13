#!/bin/bash
blih -u simon.frezard@epitech.eu repository create $1
blih -u simon.frezard@epitech.eu repository setacl $1 ramassage-tek r
blih -u simon.frezard@epitech.eu repository getacl $1
