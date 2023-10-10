// Define pin numbers for 7-segment display segments (a-g)
const int segmentPins[] = {7, 8, 9, 10, 11, 12, 13};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  if (Serial.available()) {
    char num = Serial.read(); // Read a character from serial input
    if (num == '1') {
      displayDigit(1);
    } else if (num == '2') {
      displayDigit(2);
    } 
      else if (num == '3') {
      displayDigit(3);
    }
      else if (num == '4') {
      displayDigit(4);
    }
      else if (num == '5') {
      displayDigit(5);
    }
      else if (num == '6') {
      displayDigit(6);
    }
      else if (num == '7') {
      displayDigit(7);
    }
      else if (num == '8') {
      displayDigit(8);
    }
      else if (num == '9') {
      displayDigit(9);
    }
      else if (num == '0') {
      displayDigit(0);
    }
  }
}

void displayDigit(int digit) {
  // Define the segment patterns for each digit (0-9)
  const byte digitPatterns[10] = {
    B0000001, // 0
    B1001111, // 1
    B0010010, // 2
    B0000110, // 3
    B1001100, // 4
    B0100100, // 5
    B0100000, // 6
    B0001111, // 7
    B0000000, // 8
    B0000100  // 9
  };
  // Set segment pins based on the digit pattern
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], bitRead(digitPatterns[digit], i));
  }
}
