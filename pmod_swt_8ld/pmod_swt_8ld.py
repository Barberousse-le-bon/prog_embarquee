import RPi.GPIO as GPIO
import sys


GPIO.setmode(GPIO.BCM)  # Use BCM numbering

arguments = sys.argv
print(arguments[1])

swt_list = []
swt_State = [] 

if(arguments[1] == "JA"):
    swt_list= [8,10,9,11,19,21,20,18]
elif(arguments[1] == "JB") :
    swt_list = [8,10,9,11,19,21,20,18]

for i in range(len(swt_list)):
    port = swt_list[i]
    GPIO.setup(port, GPIO.IN)
    swt_State.append(GPIO.input(port))


## LED SETUP ##
led_list = [16,14,15,17,4,12,5,6]
for i in range(len(led_list)):
    led_port = led_list[i]
    GPIO.setup(led_port,GPIO.OUT)


while(True):
    swt_State = []
    for i in range(len(swt_list)):
        port = swt_list[i]
        swt_State.append(GPIO.input(port))

    for i in range(len(led_list)):
        led_port = led_list[i]
        if(swt_State[i] == False):
            GPIO.output(led_port, GPIO.LOW)
        elif(swt_State[i] == True):
            GPIO.output(led_port, GPIO.HIGH)

