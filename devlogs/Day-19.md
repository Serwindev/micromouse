# Day 19

So, we are almost there -- Have to do PCB route for IR leds and receivers today

## Devlog

Let's open kicad..!! (It's loading...)

Note: I'm using chatGPT to determine the width of the copper traces

I did something now -- i took one correction from Esp32 (3v3) and connected it into the first led -- then took route from first led to the next and so on..

IDK whether this works -- I have asked GPT about this 

I did routed the IR led's with some difficulty -- cuz, there's no space 

Therfore i'm thinking to switch the IR led into the opposite of original connection in schematic

I have changed the GPIO pins for the IR leds -- to align it near to the IR led side..!!

NOW, i connected every IR leds to the esp32 -- still, i have to connect the MOSFET and resistors to the Receivers


So, I adjusted the led into a symmetric position -- with 5mm distance between IR led and emitters

I did all the routing and now, i'm gonna export and send it in discord, slack and chatGPT for verification

When i first ran DRC, i found almost 15 errors and then i solved almost everything

But now, There is an error called "Thermal relief connection.."

I got to google it and solve it soon -- I set the clearance of Ground plane into 0.25mm and the error gets solved!!

Now, i'm working on the silkscreen part -- IDK whether i would add a led..!! Maybe not

I'm planning to name the micromouse and print it in Silkscreen -- Maybe, Project ZACCH v1

Also, i'm planning to write Isaiah 40:31 on the back of the micromouse

After that, i have added my name and gonna finish the whole thing!!

After finishing this, i went to see the prices on online for ordering..!!

I found that the cost ranges from Rs 2k to Rs 2.5k 


That's all for today

## Work Done

- Finished the whole PCB design
- Sent the design in discord and slack for review and feedback
- Exported it into gerber and enquired the price for PCB manufacture