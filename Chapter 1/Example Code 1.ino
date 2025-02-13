/*Example Code 1*/


int RedLight = 13;  // Assign pin 13 to RedLight

void setup() {      //Everything inside the curly braces of the void setup runs only once!
  pinMode(RedLight, OUTPUT);  // Initialize RedLight as an output
}

void loop() {       //Everything inside the curly braces of the void setup runs over and over and over...and over...and over...
  digitalWrite(RedLight, HIGH);  // Turn the LED on
  delay(1000);                   // Wait for one second
  digitalWrite(RedLight, LOW);   // Turn the LED off
  delay(1000);                   // Wait for one second
}
