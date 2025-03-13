#!/bin/bash

gcc -o bin/binary_counter binary_counter.c -l wiringPi
gcc -o bin/read_button_status read_button_status.c -l wiringPi
gcc -o bin/read_and_display_buttons read_and_display_buttons.c -l wiringPi
