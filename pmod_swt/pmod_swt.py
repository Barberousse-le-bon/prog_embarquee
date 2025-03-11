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


print()
print("LSB ---------------- MSB")
print(swt_State)
print()
    
result_int = 0
for i in range(len(swt_State)):
    result_int = result_int + swt_State[i]*(2**i)
#print(result_int)

result_hex = hex(result_int)
print(result_hex)


