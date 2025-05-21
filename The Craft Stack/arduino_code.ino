const int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT);     // Set the LED pin as an output
  Serial.begin(9600);         // Initialize serial communication at 9600 baud
  digitalWrite(ledPin, LOW);  // Ensure the LED is initially OFF
  Serial.println("Setup complete: LED initialized and OFF"); // Output message
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
    // Read the incoming data as a string until a newline character
    String input = Serial.readStringUntil('\n');
    Serial.println("Data received: " + input); // Output message with received data

    // Check the input and control the LED
    if (input == "HIGH") {
      digitalWrite(ledPin, HIGH);  // Turn the LED ON
      Serial.println("LED turned ON"); // Output message
    } 
    else if (input == "LOW") {
      digitalWrite(ledPin, LOW);   // Turn the LED OFF
      Serial.println("LED turned OFF"); // Output message
    } else {
      Serial.println("Invalid command"); // Handle unexpected input
    }
  }
}
