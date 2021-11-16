#! /usr/bin/env python3

import os
import oyaml as yaml

exercise = input("Which exercise would you like to run? ")
print("")

# Check if the directory exists
if os.path.isdir(exercise):
    # Check if the info file exists
    if os.path.isfile(exercise + "/info.yaml"):
        # Load the info file
        with open(exercise + "/info.yaml", "r") as info_file:
            info = yaml.safe_load(info_file)

            # Print info
            print("Exercise #%s\n" % exercise)
            print("Assigned on %s" % info["assigned"].strftime("%B %d, %Y"))
            print("\n\n%s" % info["description"])
    # Run exercise
    os.chdir(exercise)
    os.system("sh run.sh")
else:
    print("The directory does not exist. Check the spelling of your path.")
