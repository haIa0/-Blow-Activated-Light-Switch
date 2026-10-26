# Blow-Activated-Light-Switch

Powered by an Arduino microcontroller and a KY-038 acoustic sensor, this device enables elderly and mobility-impaired individuals to turn on lights hands-free at night. The sensor was physically calibrated to filter out background noise to respond only to a blow, which activates a servo motor to flip the light switch.

Wiring:

Servo Motor: Connect to 5V, GND, and any analog write pin (PWM).

KY-038 Sound Sensor: Connect to 5V, GND, and a digital read pin (as we do not care about the exact value that is read, but whether it was triggered or not).

How It Works & Sensor Calibration
Reading Method: The project utilizes the digital output of the sound sensor to register a binary trigger state rather than continuous values.

Calibration Steps:

The sound sensor is calibrated using its variable internal resistor so that it is not affected by general low or high ambient noises.

Turn the variable resistor until the second LED on the sensor turns on (indicating it is active).

Slowly rotate the resistor in the opposite direction for small distances until the LED turns off and the sensor is affected only by a direct blow.
