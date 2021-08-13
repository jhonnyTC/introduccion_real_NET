#!/bin/bash
n=0
while [ $n -eq 0 ]
do  


    fecha1=`date`
    fecha2=`date +"%d-%m-%y-%H-%M-%S"`
    echo "$fecha1 $fecha2!" >>hola.csv
    sleep 1
done    



