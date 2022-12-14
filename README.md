# L-System Viewer

L-System Viewer is an application for viewing simple edge and node based l-systems.

It can load configuration files from disk, and present various iterations to the user.

![Main Image](screenshots/quadratic_snowflake.png)

## What it does

Currently, the program will load in a specific file, and its adjacent '.rules' file and present it at a static length
to the user.

The l-system works as expected for edge and node based rules, though there are discrepancies with certain types of fractals.

## What you will need to build/run it

- SDL2
- Linux (Should also work on Mac and Windows, but only tested on Linux)
- GCC/G++ (You can just edit the Makefile if you use another compiler)

## Using the application

The application will start with a black screen. This is correct behaviour.

Pressing the 'A' key will begin the programming at which point the following controls are possible:

- 'A' - Advance to the next L-System
- 'C' - Change the colour of the L-System
- '1-5' - These keys will update the iteration of the current L-System

NOTE: Each L-System is completely independent of the others. Changing the colours of one, will not change the colours of the rest, etc...

### Configuration files

You can edit any of the configuration files to see new changes inside of the application. You can not however rename these files, nor can
you add additional files due to the way the application loads in data.

#### Rulesets

The application supports the following rulesets:

- 'F' (move forward and draw)
- 'f' (move forward and do not draw)
- '-' (Rotate Left)
- '+' (Rotate Right)
- '[' (Push Turtle position and angle onto stack)
- ']' (Pop Turtle off stack and restore Turtle position and angle)

## Example Screenshots

![Plant A](screenshots/plant_a.png)
![Plant F](screenshots/plant_f.png)

## Video Demonstration

A video demonstrating the application can be found here:

- https://youtu.be/ixVlvb082Ko

## Known issues

- There is no title / splash screen at startup
- The output can be a bit noisy at shorted lengths
- Certain values are static and cannot be adjusted unless edits are made via code
- There is no UI and no feedback for the user
- There is no way to save output from the program
- If any key other than the ones listed in the 'Using the application' section are pressed, the screen will go black. Simply press one of assigned keys again to restore visuals.
