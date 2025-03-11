
from sense_hat import SenseHat
import time

sense = SenseHat()

sense.show_message("Bonjour Lucas", scroll_speed=0.1, text_colour=[0,255,255], back_colour=[0,0,0])
temp = sense.get_temperature()
sense.show_message(str(int(temp)), scroll_speed=0.1, text_colour=[0,255,255], back_colour=[0,0,0])
pixels = sense.get_pixels()
while(True):
    for i in range(64):
        collumn = i%8
        row = i/8 
        sense.set_pixel(collumn,int(row), 0, 255,255)
        time.sleep(0.1)

    for i in range(64):
        collumn = i%8
        row = i/8 
        sense.set_pixel(collumn,int(row), 0, 0,0)
        time.sleep(0.1)
