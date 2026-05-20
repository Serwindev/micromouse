## What is a micromouse?!

- Micromouse is an autonomous robot designed to navigate through the maze with absolutely no help from anyone.

## Why micromouse?!

- It’s fascinating, isn’t it?!

## Ingredients:

- ESP32 (Brain)
- Motor driver (To communicate with Brain and motors)
- Infrared sensors x4 (Obstacle)
- DC motors with Encoders (ofc, To move)

### ESP32

I found out that ESP32 would be cheap and cool to use — it is very beginner friendly too.

### Motor driver

Motor drivers are something that translates low voltage (From arduino) to high voltage (Necessary for motors) —> It makes the motor to be operated by the commands of arduino.

### Sensors

I’m gonna use three sensors — front-middle, front-right and front-left — to detect the walls and communicate it with the microprocessor.

### Motors with Encoders

This is the locomotive part in the micromouse — it will contain the encoder within itself. Encoders are necessary to know the exact position of our mouse in the maze.

These are the main necessary parts — but still a lot to be added (Chassis, Buck converter, etc…) 

Let’s move to the next part — which is requirements..!!

## Requirements

Let's decide what our Micromouse should do

- It should autonomously move to the goal -- center of the maze.
- It should be able to maintain center position
- It should be able to scan for obstacles.
- It should be able to track its current position.
- It should be able to calculate the best path (Using floodfill algo)

