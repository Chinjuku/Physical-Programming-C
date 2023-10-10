// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(4, OUTPUT); // 4 = Trig
  pinMode(2, INPUT);  // 2 = Echo
}

void loop()
{
  digitalWrite(4, HIGH);
  delayMicroseconds(10);
  digitalWrite(4, LOW);
  int pulseWidth = pulseIn(2, HIGH);

  Serial.print("Pulse Width: ");
  Serial.println(pulseWidth);

  float distance = pulseWidth / 29.0 / 2.0; // Calculate distance as a float
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm"); // Print units (centimeters)

  delay(1000);
}
