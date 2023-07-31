Distance Detector using Ultrasonic Sensor

This Arduino sketch implements a distance detector using an ultrasonic sensor. The sketch utilizes an ultrasonic sensor to measure the distance between the sensor and an object in front of it. The measured distance is then displayed in centimeters on the Serial Monitor.

Hardware Requirements:
- Arduino board (e.g., Arduino Uno)
- Ultrasonic sensor (HC-SR04 or similar)
- Jumper wires

Circuit Setup:
1. Connect the ultrasonic sensor's trigger (TRIG) pin to digital pin 2 on the Arduino.
2. Connect the ultrasonic sensor's echo (ECHO) pin to digital pin 3 on the Arduino.
3. Make sure to connect the GND and VCC (5V) pins of the ultrasonic sensor to the respective pins on the Arduino.

Uploading the Sketch:
1. Open the Arduino IDE and create a new sketch.
2. Copy and paste the provided code into the sketch.
3. Connect the Arduino board to your computer via USB.
4. Select the correct board and port from the "Tools" menu in the IDE.
5. Click the "Upload" button to upload the code to the Arduino board.

Usage:
1. After uploading the code, the Arduino will continuously measure the distance using the ultrasonic sensor.
2. Open the Serial Monitor in the Arduino IDE (Tools -> Serial Monitor) to view the distance readings in centimeters.
3. The Serial Monitor will display updated distance readings as the ultrasonic sensor detects objects at different distances.

Note:
- The ultrasonic sensor measures distance based on the speed of sound. The provided code assumes the speed of sound to be 343 meters per second in air at room temperature.
- Ensure the ultrasonic sensor is pointing towards the object whose distance you want to measure.
- Avoid placing the ultrasonic sensor too close to objects, as it may lead to inaccurate readings.

Acknowledgments:
This Arduino project is made possible by the contributions and innovations of the Arduino community. Enjoy experimenting with distance measurements using the ultrasonic sensor!

License:
This Arduino sketch is released under the MIT License.

Happy distance detecting! 🚀
