const int SIGNAL_PIN = 34;

void setup() {
  Serial.begin(115200);
  analogSetAttenuation(ADC_11db); // full 3.3V range
}

void loop() {
  int value = analogRead(SIGNAL_PIN);

  // Send only one value per line → required for plotter
  Serial.println(value);

  delay(25);  // ~250 samples/sec (good for ECG)
}