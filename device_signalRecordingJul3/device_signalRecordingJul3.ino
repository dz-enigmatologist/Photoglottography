// Arduino Code

const int irSensorPin = A0; // Pin connected to IR sensor
unsigned long previousMillis = 0;
unsigned long interval = 1000; // Default interval (rate)
bool recording = false;

void setup() {
  Serial.begin(9600);
  pinMode(irSensorPin, INPUT);
}

void loop() {
  if (recording) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
      int sensorValue = analogRead(irSensorPin);
      Serial.println(sensorValue);
    }
  }
}
