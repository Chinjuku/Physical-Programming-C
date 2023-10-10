void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(9) == LOW){
    digitalWrite(5, LOW); //red
    digitalWrite(6, LOW); //green
    digitalWrite(7, LOW); //blue
  }
  else if(digitalRead(10) ==LOW){
    digitalWrite(5, HIGH); //red
    digitalWrite(6, LOW); //green
    digitalWrite(7, HIGH); //blue
  }
  else if(digitalRead(11) ==LOW){
    digitalWrite(5, LOW); //red
    digitalWrite(6, HIGH); //green
    digitalWrite(7, HIGH); //blue
  }
  else{
    digitalWrite(5, HIGH); //red
    digitalWrite(6, HIGH); //green
    digitalWrite(7, HIGH); //blue
  }

}
