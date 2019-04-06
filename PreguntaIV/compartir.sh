#!/bin/bash
 echo $1


if [ -z "$1" ]
  then
     echo "uno para ti, otro para mi"
  else
     echo "uno para $1 , otro para mi"
fi    
