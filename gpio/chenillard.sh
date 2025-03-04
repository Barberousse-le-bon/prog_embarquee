#!/bin/bash

raspi-gpio set 8,10,9,11,19,21,20,18 op

while :
do

	raspi-gpio set 8,10,9,11,19,21,20,18 dl


	raspi-gpio set 8,10,9,11,19,21,20,18 dh
	sleep 0.5


	raspi-gpio set 10,9,11,19,21,20,18 dh
	raspi-gpio set 8 dl
	sleep 0.5


	raspi-gpio set 9,11,19,21,20,18 dh
	raspi-gpio set 8,10 dl
	sleep 0.5


	raspi-gpio set 11,19,21,20,18 dh
	raspi-gpio set 8,10,9 dl
	sleep 0.5


	raspi-gpio set 19,21,20,18 dh
	raspi-gpio set 8,10,9,11 dl
	sleep 0.5


	raspi-gpio set 21,20,18 dh
	raspi-gpio set 8,10,9,11,19 dl
	sleep 0.5


	raspi-gpio set 20,18 dh
	raspi-gpio set 8,10,9,11,19,21 dl
	sleep 0.5


	raspi-gpio set 18 dh
	raspi-gpio set 8,10,9,11,19,21,20 dl
	sleep 0.5


	raspi-gpio set 8,10,9,11,19,21,20,18 dl
	sleep 0.5


	raspi-gpio set 10,9,11,19,21,20,18 dl
	raspi-gpio set 8 dh
	sleep 0.5


	raspi-gpio set 9,11,19,21,20,18 dl
	raspi-gpio set 8,10 dh
	sleep 0.5


	raspi-gpio set 11,19,21,20,18 dl
	raspi-gpio set 8,10,9 dh
	sleep 0.5


	raspi-gpio set 19,21,20,18 dl
	raspi-gpio set 8,10,9,11 dh
	sleep 0.5


	raspi-gpio set 21,20,18 dl
	raspi-gpio set 8,10,9,11,19 dh
	sleep 0.5


	raspi-gpio set 20,18 dl
	raspi-gpio set 8,10,9,11,19,21 dh
	sleep 0.5


	raspi-gpio set 18 dl
	raspi-gpio set 8,10,9,11,19,21,20 dh
	sleep 0.5
done
