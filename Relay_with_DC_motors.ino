void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(5000); // Wait for 5 seconds (switch the Relay ON)
  digitalWrite(8, LOW);
  delay(5000); // Wait for 5 seconds (switch the Relay OFF)
}
