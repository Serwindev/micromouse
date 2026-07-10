# Project Zacch v1

## About the project

Project Zacch is a full-size micromouse whose aim is to solve the maze autonomously.

The name of the mouse actually comes from Bible (Luke 19:1-10). There was a man called Zacchaeus -- who wanted to see Jesus but because he was short, he couldn't able to see Him. So he climbed a tree to see Jesus.

The dimension of Zacch is 90mm x 127mm (3.54 x 5.00 inches). Compared to other mice out there, it isn't that small. But this is my first-ever hardware project and i needed some more space to work properly.

The Project Zacch v1 is a project made for the event ["Fallout"](https://fallout.hackclub.com/) conducted by [HackClub](https://hackclub.com/).

---

## Project Workflow

I have actually journalled everything from Day 1 till the end -- you can find them in the **Devlogs folder**.

#### Research and Development

- On the Day 1, i worked on researching the requirments for the project.
- On further days, i sourced online to find the suitable products and built the BOM (Bill of materials) -- which you can find [here](components/BOM.csv) and also sketched a very rough diagram about the wiring.

![alt text](assets/Board.jpg)

---

#### Schematic 

- From day 4, i worked on the Schematic design in Kicad. It's my very first time and i found it kinda hard at first.
- After some several iterations and struggles, with the help of chatGPT, i finished the 1st version of schematic on day 7

![alt text](assets/Schematic-v1.png)

---

#### CAD design

- From Day 8, i worked on the CAD design of this project in Tinkercad
- After two days of CAD'ing, i somehow managed to capture the vision in my mind into the Screen. (Spoiler alert: Final result isn't the same as here)

![alt text](assets/CAD_design/CAD_design.png)

---

#### PCB design

- After the completion of CAD design, i started to add footprints for all the componenets in kicad.
- I found it hard to understand the way footprint works in the consecutive days.
- During these days, i changed the IR sensors - from modules to separate transmiter. (Reason: Because the module provides only True or False output based on whether the obstacle is near or not)
- I completed the whole routing of PCB by the day 20, but then i found that esp32 has been misaligned and needs to be re-aligned.
- After two days of debugging, i completed the PCB (But still, I thought of adding some LED's into the PCB and mounting Pads for caster ball)

##### Front copper

![alt text](assets/PCB_screenshots/F-Cu.png)

##### Back copper

![alt text](assets/PCB_screenshots/B-Cu.png)

##### Final routing 

![alt text](assets/PCB_screenshots/Final-routing.png)

PS: There's an easter egg in the PCB -- if you can find it out and DM me for prizes!! 
Instagram: [@serwin.dev](https://www.instagram.com/serwin.dev)

---

### Features

- Project Zacch uses two driven wheels and a non-driven caster ball for locomotion.
- It uses IR sensors and transmitter to wall sensing mechanism.

---

### Future works

- Once the build is successful, the firmware of the project will commence.
- Using PID for staying in the center of the line.

---

### Contributors

- [@Serwindev](https://github.com/Serwindev)

---

### Resources

- [Ojasp21/micromouse](https://github.com/Ojasp21/Micromouse/tree/main)
- [Mushak/micromouse](https://github.com/gautam-dev-maker/mushak/tree/main)

---

### Special Credits

- All thanks to HackClub for making this project came into life through [Fallout](https://fallout.hackclub.com/)