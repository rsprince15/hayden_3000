#!/usr/bin/python

import os
import time
import subprocess
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)

GPIO.setwarnings(False)
GPIO.setup(10, GPIO.IN)

while True:
	#print GPIO.input(10)
	if (GPIO.input(10) == False):
        	os.system('omxplayer ~/projects/hayden_3000/sounds/iamarobot.wav')
	time.sleep(1)
        
