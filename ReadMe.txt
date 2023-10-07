As of the fiscal year of 2019, the number of cars on Indian roads stood at 295.8 million, with an increase in the number of cars sold every year. According to the World Health Organization, one out of every 10 people killed on the roads in the world is from India, with the country having an average of 472,606 car accidents and 149,472 people killed from 2015-2019. However, 74% of these accidents were caused due to the drivers of the vehicles using high beams which led to such tragic events.
Many drivers are unaware of the proper usage of high beams and their effect on other drivers on the road. As such, this ignorance has led to the high number of accidents involving improper use of high beams.
Though there are laws and fines for the improper use of high beams, the need for a technology to combat the “high beam issue” is a pressing one. As such, this report delves an innovative solution to the problem. A mechanism that can automatically determine whether the headlight beam must be lowered and raised as well as which beam to dip. The technology can be automatically controlled the headlights of the vehicle based on the detection of other automobile headlights and taillights in the area, whether bright or darkened.

// REFER CIRCUIT DIAGRAM PROVIDED IN REPOSITORY

Description of the connections made in the above diagram:
1.	Arduino Power supply – Arduino UNO R3 can be powered by a round pin DC connector with positive center or by using the USB connector.
2.	LED Connections –   
a.	Yellow LEDs represent the High beam headlamps of a vehicle.
b.	Cathode ends of the yellow LEDs are connected to pins 5 and 6 respectively and the anode ends are grounded.
c.	White LEDs represent the Low beam headlamps of a vehicle.
d.	Cathode of the white LEDs are connected to pins 7 and 8 respectively and the anode ends are grounded.
e.	Here, pins 12 and 13 function as ground.
3.	Photodiode connection – 
a.	VCC is connected to 5V pin of Arduino UNO R3.
b.	Ground is connected to ground pin (GND) of Arduino board.
c.	 Output terminal of the photodiode is connected to the A0 analog pin of the Arduino UNO R3 microcontroller.
