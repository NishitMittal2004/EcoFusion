const int piezoPin = A0; // Analog input pin for the piezoelectric sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
}

void loop() {
  int sensorValue = analogRead(piezoPin); // Read the voltage from the piezoelectric sensor
  float voltage = sensorValue * (5.0 / 1023.0); // Convert the sensor value to voltage (assuming a 5V reference voltage)

  Serial.print("Voltage: ");
  Serial.print(voltage, 2); // Print the voltage with 2 decimal places
  Serial.println(" V");
  
  delay(1000); // Wait for 1 second before taking the next reading
}