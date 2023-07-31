// Define the digital pins for the ultrasonic sensor
const int trigPin = 2;
const int echoPin = 3;

void setup() {
  // Initialize the Serial Monitor
  Serial.begin(9600);

  // Set the trigPin as OUTPUT and echoPin as INPUT
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Trigger the ultrasonic sensor by sending a 10µs HIGH pulse to the trigger pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the pulse from the echo pin
  unsigned long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance based on the speed of sound (343 meters per second)
  // and the duration of the pulse
  // Divide by 2 as the sound travels to the object and back
  float distance_cm = duration * 0.0343 / 2.0;

  // Display the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  // Add a delay before taking the next distance reading
  delay(500);
}
