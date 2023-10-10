#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 10, 11, 12}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 6, 7, 8}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
    if(customKey == '1')
    {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
    }
    else if(customKey == '2')
    {
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
    }
    else if(customKey == '3')
    {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
    }
    else if(customKey == '4')
    {
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
    }
    else if(customKey == '5')
    {
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
    }
    else if(customKey == '6')
    {
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
    }
    else if(customKey == '7')
    {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
    }
    else if(customKey == '8')
    {
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
    }
    else if(customKey == '9')
    {
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 0);
    }
    else if(customKey == 'A')
    {
      digitalWrite(2, 0);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
    }
    else if(customKey == 'B')
    {
      digitalWrite(2, 0);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
    }
    else if(customKey == 'C')
    {
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
    }
    else if(customKey == 'D')
    {
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
    }
    else if(customKey == '*')
    {
      digitalWrite(2, 0);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
    }
    else if(customKey == '#')
    {
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
    }
    else if(customKey == '0')
    {
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
    }
  }
}

// #include <Keypad.h>

// int r = 1;
// int g = 2;
// int b = 3;

// const byte ROWS = 4; //four rows
// const byte COLS = 4; //four columns
// //define the cymbols on the buttons of the keypads
// char hexaKeys[ROWS][COLS] = {
//   {'1','2','3','A'},
//   {'4','5','6','B'},
//   {'7','8','9','C'},
//   {'*','0','#','D'}
// };
// byte rowPins[ROWS] = {9, 10, 11, 8}; //connect to the row pinouts of the keypad
// byte colPins[COLS] = {5, 6, 7, 4}; //connect to the column pinouts of the keypad

// //initialize an instance of class NewKeypad
// Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

// void setup(){
//   Serial.begin(9600);
//   pinMode(r, OUTPUT);
//   pinMode(g, OUTPUT);
//   pinMode(b, OUTPUT);
// }
  
// void loop(){
//   char customKey = customKeypad.getKey();
  
//   if (customKey){
//     Serial.println(customKey);
//     if(customKey == '1')
//     {
//       digitalWrite(r, 0); //b
//       digitalWrite(g, 1);
//       digitalWrite(b, 0); //g
//     }
//     else if(customKey == '2')
//     {
//       digitalWrite(r, 1);
//       digitalWrite(g, 0);
//       digitalWrite(b, 1);
//     }
//     else if(customKey == '3')
//     {
//       digitalWrite(r, 1);
//       digitalWrite(g, 1);
//       digitalWrite(b, 0);
//     }
//     else if(customKey == '4')
//     {
//       digitalWrite(r, 0);
//       digitalWrite(g, 1);
//       digitalWrite(b, 0);
//     }
//     else if(customKey == '5')
//     {
//       digitalWrite(r, 1);
//       digitalWrite(g, 0);
//       digitalWrite(b, 1);
//     }
//     else if(customKey == '6')
//     {
//       digitalWrite(r, 0);
//       digitalWrite(g, 1);
//       digitalWrite(b, 0);
//     }
//     else if(customKey == '7')
//     {
//       digitalWrite(r, 1);
//       digitalWrite(g, 1);
//       digitalWrite(b, 0);
//     }
//     else if(customKey == '8')
//     {
//       digitalWrite(r, 1);
//       digitalWrite(g, 0);
//       digitalWrite(b, 1);
//     }
//     else if(customKey == '9')
//     {
//       digitalWrite(r, 1);
//       digitalWrite(g, 0);
//       digitalWrite(b, 0);
//     }
//     else if(customKey == 'A')
//     {
//       digitalWrite(r, 0);
//       digitalWrite(g, 0);
//       digitalWrite(b, 1);
//     }
//     else if(customKey == 'B')
//     {
//       digitalWrite(r, 0);
//       digitalWrite(g, 0);
//       digitalWrite(b, 1);
//     }
//     else if(customKey == 'C')
//     {
//       digitalWrite(r, 0);
//       digitalWrite(g, 1);
//       digitalWrite(b, 0);
//     }
//     else if(customKey == 'D')
//     {
//       digitalWrite(r, 1);
//       digitalWrite(g, 0);
//       digitalWrite(b, 1);
//     }
//     else if(customKey == '*')
//     {
//       digitalWrite(r, 0);
//       digitalWrite(g, 0);
//       digitalWrite(b, 1);
//     }
//     else if(customKey == '#')
//     {
//       digitalWrite(r, 0);
//       digitalWrite(g, 1);
//       digitalWrite(4, 0);
//     }
//     else if(customKey == '0')
//     {
//       digitalWrite(r, 1);
//       digitalWrite(g, 1);
//       digitalWrite(4, 1);
//     }
//   }
// }
