int ledPin = 3;                // Use the Arduino pin 3(Change if necessary)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn LED on
  delay(1000);                 // Wait 1 second

  digitalWrite(ledPin, LOW);   // Turn LED off
  delay(1000);                 // Wait 1 second
}
