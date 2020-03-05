# PID_mixer

## Plan

### Purpose

We are creating a hand held motor powered blender that uses PID to control the volatage of the motor in order to keep the speed constant with varying levels of resitstance. Specifically, we want to find a device that is able to measure the speed of our blender. 

### Measures of Success 

1. Is the serial monitor reading accurate values for speed (rps)?
2. is the photo reflector securely mounted inside the mixer?

### Materials
 
* Dash (company) hand Mixer
  * [Dash Mixer on Amazon](https://www.amazon.com/SHM01DSWH-Electric-Whipping-Brownies-Meringues/dp/B016CBFUV4?th=1)
* [Photo Reflector](https://www.digikey.com/products/en?keywords=PHOTOINTERRUPTER%20REFL%206MM%20800NM)
* Prototyping shield
* 3d printed holder for the photo reflector
* Tape
* 1 220 resistor
* 1 10k resistor
* 5 extra long wires
* 2 shorter wires
* Wire covers


### Constraints/Problems
 
* The size of the mixer body does not easily allow a photo interrupter 
* Time
* Choosing either photointerruptor or magnetic dectector or other
* Whether or not the other group decides to make a new frame for the mixer
* wirting code that will work for the mixer
* Assembling everything: where to put phot reflector and how not to brake the wires. 

### Schedule 

| Week | Goal | Accomplishments | 
| ---- | ---- | --------------- |
| 11/25 (short week)| Finish outline of plan and begin detailed research | plan submitted |
| 12/2-13 | Finish our notebooks and plan(Sketches and research). Have basic outline of PID code/understand PID|Completed plan and researched PID |
| 12/16-1/8 |Choose a method of measuring speed to attempt. Attach Interrupts with phorointerruptpr. Wire photo reflector and read values. |Completed plan and decided on a photo reflector. Ella wrote code with detachinterrupt using the photointerrupter. Justine wired the photoreflector correctly and wrote code to check the value.|
| 1/9-17 | Combine two codes and test. Sauder the photo reflector’s wires correctly, start solidworks design for part to attach photo.  |We combined our codes and built a prototype to test if the code was working. We also soldered wires and wire covers onto the photo reflector. |
| 1/20-31 | Work on photo reflector holder design. Asses current problem with code which causes the serial monitor to read only 0. |We finished and printed the part. We also fixed that issue with our code by putting the photo reflector closer to the fan.|
|2/3-14| Attach photo reflector with part and adjust to get the code working. | We attached our photo reflector but had some setbacks because we had to break the photo reflector and had to resauder another one. We then worked on cleaning up our code. |
|2/17-28| Fix any issues with code. Maybe add in a toggle. Switch wiring to a prototyping shield.|We completed all goals (code didn’t need toggle). |
|3/4-7| documentation||

### Potential Problems

* Choosing either photointerrupter or magnetic detector or other
* Understanding PID (Maintaining speed w/ different levels of resistance by changing voltage)
* Writing code that will work for the mixer
* Assembling everything, where to out the photointerrupter/ electromagnetic detector
* Fitting the LCD screen and the photointerrupter

### Solutions

* Cut photo interrupter in half and use reflective tape of the fan
  * Light reflective photo - [Different types of Photointerruptors](https://www.rohm.com/electronics-basics/photointerrupters/what-is-a-photointerrupter)
  * [photoreflector](https://www.deviceplus.com/how-tos/arduino-guide/entry015/)
  * Reflective tape
* Use electromagnetic detector
* We could use a torque detector
* Find a space to fit the photointerrupter
* Cut of fan grate thing and have photointerrupter on outside with 3d printed part connected to fan
* Discussing these problems with the other group
* Try to measure torque
  * [Resource about torque ](https://measurementsensors.honeywell.com/techresources/appnotes/Pages/Ways_to_Measure_the_Force_Acting_on_a_Rotating_Shaft.aspx)
  * [Torque sensors](https://www.azosensors.com/article.aspx?ArticleID=605)
* Motor resistance

### Images

#### Sketches

![alt text](https://github.com/jbrown56/PID_mixer/blob/master/Photots/sketch_solution_1.jpg)
![alt text](https://github.com/jbrown56/PID_mixer/blob/master/Photots/sketch_solution_2.jpg)
![alt text](https://github.com/jbrown56/PID_mixer/blob/master/Photots/sketch_solution_3.jpg)

#### Fritzing

![alt text](https://github.com/jbrown56/PID_mixer/blob/master/Photots/wiring_diagram.PNG)

#### Solid Works

![alt text](https://github.com/jbrown56/PID_mixer/blob/master/Photots/ClampPic.PNG)

## Reflection

We encountered several issues when working on this project. Our first problem was with the photo reflector itself. We had to figure out what sort of device we could use that was small enough to fit inside the mixer. Once we decided on the photo reflector we had a lot of trouble figuring out where to put it. We knew we had to use the fan to measure the speed so we had limited options. Eventually we were able to attach the sensor above the motor so that it sat only a few millimeters from the fan. 
	Our second big problem was with the code. We couldn’t get out the sensor to trigger the falling and rising of the attachinterrupt function. We did some research and realized that the value had to go from low to high. Low being less than 512, high being above. Once we did that we realized our sensor wasn’t reading low enough values. We fixed that by both moving it a little closer to the fan and by reducing the resistance. 
	Additionally we had a problem as we used two attach interrupts with two different pins unnecessarily. Once we found out we could use just one and it would be much simpler but still function the same way; we switched it. 

