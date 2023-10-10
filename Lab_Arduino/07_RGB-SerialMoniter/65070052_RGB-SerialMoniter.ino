int r = 4;
int g = 2;
int b = 3;
char ctrl[5];

void setup() {
  	pinMode(r, OUTPUT);
  	pinMode(g, OUTPUT);
  	pinMode(b, OUTPUT);
	Serial.begin(19200);
}

void loop(){
	if( Serial.available() >= 3 ){
	Serial.readBytes(ctrl, 5);
    ctrl[5] = '\0';
      
	if (strcmp(ctrl, "Red") == 0) {
		digitalWrite(r,1);
      	digitalWrite(g,0);
      	digitalWrite(b,0);
	}
    else if (strcmp(ctrl, "Green") == 0) {
      	digitalWrite(r,0);
		digitalWrite(g,1);
      	digitalWrite(b,0);
	}
    else if (strcmp(ctrl, "Blue") == 0) {
		digitalWrite(r,0);
      	digitalWrite(g,0);
      	digitalWrite(b,1);
	}
      else{
        digitalWrite(r,0);
      	digitalWrite(g,0);
      	digitalWrite(b,0);
      }
	}
}
