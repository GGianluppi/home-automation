# Home Automation

This project is part of the Undergraduate Final Project, which proposes the development of a home automation device responsible for controlling household equipment and interacting with physically disabled individuals within an environment through voice commands. It also provides the user with an interface via an application.


## General Diagram of Prototype Functionality

<p align="center">
<img src="https://user-images.githubusercontent.com/104764600/192168021-f1e8db62-0d51-414c-b81d-95754818fb5d.png" width="650" height="250">
</p>

The diagram's interpretation can be understood as follows: the first option for the user to activate a specific device is by using voice recognition, performed directly by the Voice Recognition Module V3, which will send a command to the 4-channel module that will trigger the relays. The other option, aimed at people who have some total or partial speech impairment, allows the use of an application. This alternative enables the user to perform the same actions that a second individual would make by activating equipment through voice recognition.

## Voice Recognition Prototype with the Blynk Application

It is possible to observe the prototype and the application used to control the equipment. All four lamps, which are represented by different rooms, are turned off. The devices being off will be represented by the color red, while the color green represents that the device is on.

<p align="center"><img src = "https://user-images.githubusercontent.com/104764600/192415670-c991bad7-e646-427b-b19c-f0be5d1b78d8.jpeg" width="500" height="350" /> <img src = "https://user-images.githubusercontent.com/104764600/192168047-b538d6fe-9c75-487e-b19d-905a19535275.jpeg" width="200" height="350" /></p>

<p align="center"><img src = "https://user-images.githubusercontent.com/104764600/192396701-7f96627a-24fd-4fc4-819f-7bab486ab688.jpeg" width="500" height="350" /> <img src = "https://user-images.githubusercontent.com/104764600/192168050-3a588fff-e99b-4d4a-acc4-c8be4831f0c0.jpeg" width="200" height="350" /></p>

Two activation methods were used, and both triggered a color change in the Blynk application. For instance, as soon as the first lamp was activated by saying the word "Bedroom," the icon immediately changed to green. The same happened with the "Living Room" button; after pressing it, its color changed from red to green, turning on the second lamp.

## Tests Conducted on the Prototype

The first test approach focused on observing the efficiency of the Blynk app and the ESP8266 ESP-01 version for remote activations, shown in the figure on the left. Additionally, voice recognition tests were conducted, shown in the figure on the right.

(Note: In this stage of voice recognition testing, a closer distance to the VR3 module was adopted in recording mode. For this reason, the effectiveness of the voice recognition was aligned with the initially recorded distance.)

<p align="center"><img src = "https://user-images.githubusercontent.com/104764600/192168052-db0d6065-cc64-4c4e-82fc-e8feb49c87c3.png" width="400" height="300" /> <img src = "https://user-images.githubusercontent.com/104764600/192168054-b47511dc-f7bc-4df5-a933-24a7e30ab186.png" width="400" height="300" /></p>

Furthermore, the prototype's efficiency was evaluated through attempts and distances adopted. The figures below represent the efficiency of the application and voice recognition module, respectively.

<p align="center"><img src = "https://user-images.githubusercontent.com/104764600/192168069-abeb1d80-f80c-4227-a31f-67a5e6c45dda.png" width="250" height="250" /> <img src = "https://user-images.githubusercontent.com/104764600/192168067-07631da2-62d5-470f-bed7-5c251d14fb4c.png" width="250" height="250" /></p>

## Prototype Control Circuit

<p align="center">
<img src="https://user-images.githubusercontent.com/104764600/192168035-c2d9b719-73f8-40eb-8eeb-ba66d55b6fb1.png" width="1000" height="600">
</p>






