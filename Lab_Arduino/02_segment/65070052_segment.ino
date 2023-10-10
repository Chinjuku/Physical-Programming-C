int speed = 1000;
int digit1, digit2;
int starttime = 0;
int endtime;
int i = 0;

void display_number(int num){
  switch(num)
  {
    case 0:
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    break;
    case 1:
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    break;
    case 2:
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    break;
    case 3:
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    break;
    case 4:
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    break;
    case 5:
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    break;
    case 6:
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    break;
    case 7:
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    break;
    case 8:
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    break;
    case 9:
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    break;
    // default:
    // digitalWrite(4,HIGH);
    // digitalWrite(5,HIGH);
    // digitalWrite(6,HIGH);
    // digitalWrite(7,HIGH);
    // digitalWrite(8,HIGH);
    // digitalWrite(9,HIGH);
    // digitalWrite(10,HIGH);
    // digitalWrite(11,HIGH);
    // break;
 }
}

void showNum(int digit2, int digit1)
{
 digitalWrite(2, HIGH);
 digitalWrite(3, LOW);
 display_number(digit1);
 delay(5);
 digitalWrite(2, LOW);
 digitalWrite(3, HIGH);
 display_number(digit2);
 delay(5);
}

void setup() {
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);//a
 pinMode(5, OUTPUT);//b
 pinMode(6, OUTPUT);//c
 pinMode(7, OUTPUT);//d
 pinMode(8, OUTPUT);//e
 pinMode(9, OUTPUT);//f
 pinMode(10, OUTPUT);//g
 pinMode(11, OUTPUT);//dot
}

void loop() {
 showNum(digit2, digit1);
 endtime = millis();
 if((endtime - starttime) >= speed)
 {
   if(i == 0){
     digit1 = 6;
     digit2 = 5;
     i++;
    }
    else if(i == 1){
      digit1 = 0;
      digit2 = 7;
      i++;
    }
    else if(i == 2){
     digit1 = 0;
     digit2 = 0;
     i++;
    }
    else if(i == 3){
     digit1 = 5;
     digit2 = 2;
     i = 0;
    }
    starttime = endtime;
  }
}


// //array
// const int segmentPins1[] = {7, 8, 9, 10, 11, 12, 13};
// const int segmentPins2[] = {0, 1, 2, 3, 4, 5, 6};
// void setup() {
//   // Set all segment pins as OUTPUT
//   for (int i = 0; i < 7; i++) {
//     pinMode(segmentPins1[i], OUTPUT);
//   }
//   for (int i = 0; i < 7; i++) {
//     pinMode(segmentPins2[i], OUTPUT);
//   }
// }

// void loop() {
//   // Display the number 5 on the 7-segment display
//   displayDigit(6, 1);
//   displayDigit(5, 2);
//   delay(1000);
//   displayDigit(0, 1);
//   displayDigit(7, 2);
//   delay(1000);
//   displayDigit(0, 1);
//   displayDigit(7, 2);
//   delay(1000);
//   displayDigit(5, 1);
//   displayDigit(2, 2);
//   delay(1000);
// }

// // Function to display a digit (0-9) on the 7-segment display
// void displayDigit(int digit, int num) {
//   // Define the patterns for each digit (0-9)
//   // You can modify this array to match your specific display
//   const byte digitPatterns[] = {
//     B1000000, // 0
//     B1110110, // 1
//     B0100001, // 2
//     B10110000, // 3
//     B10011001, // 4
//     B0001100, // 5
//     B0001000, // 6
//     B1100110, // 7
//     B10000000, // 8
//     B0000000  // 9
//   };

//   // Check if the digit is within the valid range (0-9)
//   if (num == 1) {
//     // Display the digit on the 7-segment display
//     for (int i = 0; i < 7; i++) {
//       digitalWrite(segmentPins1[i], bitRead(digitPatterns[digit], i));
//     }
//   }
//   else if(num == 2){
//     // Display the digit on the 7-segment display
//     for (int i = 0; i < 7; i++) {
//       digitalWrite(segmentPins2[i], bitRead(digitPatterns[digit], i));
//     }
//   }
// }

// void setup() {
//   pinMode(7, OUTPUT);
//   pinMode(8, OUTPUT);
//   pinMode(9, OUTPUT);
//   pinMode(10, OUTPUT);
//   pinMode(11, OUTPUT);
//   pinMode(12, OUTPUT);
//   pinMode(13, OUTPUT);
  
//   pinMode(0, OUTPUT);
//   pinMode(1, OUTPUT);
//   pinMode(2, OUTPUT);
//   pinMode(3, OUTPUT);
//   pinMode(4, OUTPUT);
//   pinMode(5, OUTPUT);
//   pinMode(6, OUTPUT);
// }

// //no array
// void loop() {
//   // 6
//   digitalWrite(7, LOW);
//   digitalWrite(8, LOW);
//   digitalWrite(9, HIGH);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(10, HIGH);
//   digitalWrite(11, LOW);
//   digitalWrite(12, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(13, LOW);
//   delay(1000);
//   // 5
//   digitalWrite(7, LOW);
//   digitalWrite(8, LOW);
//   digitalWrite(9, HIGH);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(10, HIGH);
//   digitalWrite(11, LOW);
//   digitalWrite(12, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(13, LOW);
//   delay(1000);
//   // 0
//   digitalWrite(7, LOW);
//   digitalWrite(8, LOW);
//   digitalWrite(9, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(10, LOW);
//   digitalWrite(11, LOW);
//   digitalWrite(12, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(13, HIGH);
//   delay(1000);
//   // 7
//   digitalWrite(7, LOW);
//   digitalWrite(8, HIGH);
//   digitalWrite(9, HIGH);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(10, LOW);
//   digitalWrite(11, LOW);
//   digitalWrite(12, HIGH);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(13, HIGH);
//   delay(1000);
//   // 0
//   digitalWrite(7, LOW);
//   digitalWrite(8, LOW);
//   digitalWrite(9, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(10, LOW);
//   digitalWrite(11, LOW);
//   digitalWrite(12, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(13, HIGH);
//   delay(1000);
//   // 0
//   digitalWrite(7, LOW);
//   digitalWrite(8, LOW);
//   digitalWrite(9, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(10, LOW);
//   digitalWrite(11, LOW);
//   digitalWrite(12, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(13, HIGH);
//   delay(1000);
//   // 5
//   digitalWrite(7, LOW);
//   digitalWrite(8, LOW);
//   digitalWrite(9, HIGH);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(10, HIGH);
//   digitalWrite(11, LOW);
//   digitalWrite(12, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(13, LOW);
//   delay(1000);
//   // 2
//   digitalWrite(7, HIGH);
//   digitalWrite(8, LOW);
//   digitalWrite(9, LOW);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(10, LOW);
//   digitalWrite(11, LOW);
//   digitalWrite(12, HIGH);  // turn the LED on (LOW is the voltage level)
//   digitalWrite(13, LOW);
//   delay(1000);
// }
