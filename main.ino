#include <Servo.h>
Servo s;
int servoPin=9,sensorPin=8; // servoPin: pin for servo, sensorPin: pin for sound sensor
int neww,old=0,boo=0; // new: new reading for sensor, old: old reading for sensor, boo: boolean 
 
void setup() {
  // put your setup code here, to run once:
pinMode(sensorPin,INPUT);// setup pins
 pinMode(servoPin,OUTPUT); 
 
  s.attach(servoPin); // attach servo
 Serial.begin(9600); 
 s.write(0);
}
void loop() { neww=digitalRead(sensorPin);

Serial.println(neww);



	if (old==0 && neww==1){ // check if the servo reading changes using rising edge
		if (boo==0) // check boolean
 			{s.write(90); 
			boo=1;}
	else 	
			{s.write (0); 
			boo=0;}
	delay(300);

neww=digitalRead(sensorPin); }

old=neww;
}

}
