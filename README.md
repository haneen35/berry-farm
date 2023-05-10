# <b>what did i use : </b>
<br>arduino uno
<br>breadboard
<br>jumpers
<br>two hole humdifier
<br>micro-usb cable
<br>water pump
<br>relay module 12v
<br>plastic basket
<br>plastic box
<br>pH sensor
<br>humidity sensor
<br>12v dc adapter
<br>female dc jack
<br>orange peels
<br>electrical tape
<br>pvc flexible pipes
<br>plastic bottles
<br>servomotor (4kg - 180 degree) <br>
# <b>description of flowcharts: </b>
<br>![project flow chart](https://github.com/haneen35/berry-farm/assets/129758155/5b85d76c-06d1-4878-bee0-9507f73f305f)
The prototype is a smart system for a closed system consisting of two sections each for a certain parameter and this all would be operated by Arduino technology. For the humidity parameter a humidity sensor would be connected to the Arduino board. The system has to maintain certain conditions so if the humidity needs to be raised the humidifier would respond. For the pH. parameter a pH sensor would be connected to the Arduino board. The system has to maintain certain pH level without raising so the water pump would respond by pumping an acidic solution to lower the pH till it’s back to the optimum point.
The reading of each sensor would also be presented on the laptop via serial monitor.
![prototype diagram](https://github.com/haneen35/berry-farm/assets/129758155/ca6ddb26-f45d-4a6b-852d-f3e2711348fe)


# <b>description of prototype: </b>
<br>![prototype from outside](https://github.com/haneen35/berry-farm/assets/129758155/d7c666cc-6278-4f75-b31c-98a465aee528)
The prototype is a compound smart system operated using Arduino technology. Each sensor has two terminals connected to the first half of the bread board the negative terminal to the negative column and the power supply pin to the positive column. The polarity of each column is determined by the Arduino pins connected to them. The third terminal of each sensor is connected directly to the Arduino. Input pins. The servo motor, which opens the humidifier by clicking it, is connected to the Arduino by the positive terminal and the negative terminal to the negative column of the breadboard and is fixed on the humidifier using electrical tape. The humidifier is powered using a USB cable connected to the laptop. The water vapor was collected into the upper part of a plastic bottle then to a pipe.The water pump is connected to a relay module switch which is connected the second half of the breadboard: the negative terminal to the negative column and the power supply pin to the positive column, and relay module is connected to the Arduino to be controlled. The water pump was put in an acidic solution made of orange peels in the bottom half of a plastic bottle and using a pipe to be connected to the box that represent the greenhouse. The code was written on Arduino IDE and then uploaded to the Arduino microcontroller. After the circuit was done, it was applied to a plastic container which acts as a closed greenhouse system that was modified by creating holes via solder and put on a plastic box to hold all the components together. All the electrical connections were via jumpers 
<br>![prototype from inside](https://github.com/haneen35/berry-farm/assets/129758155/6bc06aa3-5993-4eeb-99c9-3cea1cd16833)
![circuit](https://github.com/haneen35/berry-farm/assets/129758155/72f0d99d-3f15-446d-858f-07209ca77bb6)
