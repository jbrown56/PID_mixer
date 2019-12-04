# PID_mixer

## Purpose

We are creating a hand held motor powered blender that uses PID to control the volatage of the motor in order to keep the speed constant with varying levels of resitstance. Specifically, we want to find a device that is able to measure the speed of our blender. 

## Measures of Success 

1. If we can actually use the mixer to successfully mix batter
2. If the speed of the mixer remains constant and accurate to the desired value despite changes (increases/decreases) in resistance. (The actual speed of the mixer should always match the desired speed.)

## Materials
 
* Electromagnetic Detector (Maybe)
* Photointerrupter (Maybe)
* Arduino
* Motor
* Dash (company) hand Mixer
  * [Dash Mixer on Amazon](https://www.amazon.com/SHM01DSWH-Electric-Whipping-Brownies-Meringues/dp/B016CBFUV4?th=1)
* LCD
* Potentiometer
* LED Light

## Constraints
 
* The size of the mixer body does not easily allow a photo interrupter 
* Time
* Limited knowledge of PID
* Whether or not the other group decides to make a new frame for the mixer
* 120 volts of hand mixer compared to 9 volts of arduino

## Schedule 

| Week | Goal | Accomplishments | 
| ---- | ---- | --------------- |
| 11/25 (short week)| Finish outline of plan and begin detailed research | plan submitted |
| 12/2 | Finish our notebooks and plan(Sketches and research). | |
| 12/9 | Have basic outline of PID code/understand PID| |
| 12/16 | Choose a method of measuring speed to attempt | |
| TBD | | |

## Potential Problems

* Choosing either photointerrupter or magnetic detector or other
* Understanding PID (Maintaining speed w/ different levels of resistance by changing voltage)
* Writing code that will work for the mixer
* Assembling everything, where to out the photointerrupter/ electromagnetic detector
* Fitting the LCD screen and the photointerrupter

## Solutions

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

## Notes

### Images
![alt text](https://github.com/jbrown56/PID_mixer/blob/master/Photots/sketch_solution_1.jpg)
![alt text](https://github.com/jbrown56/PID_mixer/blob/master/Photots/sketch_solution_2.jpg)
![alt text](https://github.com/jbrown56/PID_mixer/blob/master/Photots/sketch_solution_3.jpg)
