#! /usr/bin/env python3

import os

exercise = input("Which exercise would you like to run? ")

# Check if the directory exists
if os.path.isdir(exercise):
    os.chdir(exercise)
    os.system("sh run.sh")
else:
    print("The directory does not exist. Check the spelling of your path.")
