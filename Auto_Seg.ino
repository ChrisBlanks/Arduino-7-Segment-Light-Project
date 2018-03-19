//Programmer: Chris Blanks
//Date: 12/21/2017
//Purpose: Make a simple 7-Segment LED system with red LEDs and 470 Ohm Resistors. It will automatically cycle through the numbers 0-7.
//Note: The current code allows for the cycling through the numbers 0 to 7, but could be extended further with extra LEDs.

// Initializing variable names to specific pin numbers
const int ledPin5 = 5;
const int ledPin6 = 6;
const int ledPin7 = 7;
const int ledPin8 = 8; 
const int ledPin9 = 9;
const int ledPin10 = 10;
const int ledPin11 = 11;


void setup() {
  
//Initializing LED pins as output
pinMode(ledPin5, OUTPUT);
pinMode(ledPin6, OUTPUT);
pinMode(ledPin7, OUTPUT);
pinMode(ledPin8, OUTPUT);
pinMode(ledPin9, OUTPUT);
pinMode(ledPin10, OUTPUT);
pinMode(ledPin11, OUTPUT);

}
// The code cycles through 0-7 every loop. A two second delay (or 2,000 Milliseconds) occurs between each number transition.
void loop() { 
  
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH);
  digitalWrite(ledPin7,HIGH); //The Number 0 will be displayed as the default
  digitalWrite(ledPin8,HIGH);
  digitalWrite(ledPin10, HIGH);
  digitalWrite(ledPin11, HIGH);
  digitalWrite(ledPin9, LOW);

  delay(2000);
  
  digitalWrite(ledPin7,HIGH);
  digitalWrite(ledPin9,HIGH); //The Number 1 will be displayed
  digitalWrite(ledPin11,HIGH);

  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6,LOW);
  digitalWrite(ledPin8,LOW);
  digitalWrite(ledPin10,LOW);

  delay(2000);

  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH); //The Number 2 will be displayed
  digitalWrite(ledPin8,HIGH);
  digitalWrite(ledPin9,HIGH);
  digitalWrite(ledPin11, HIGH);

  digitalWrite(ledPin7,LOW);
  digitalWrite(ledPin10,LOW);

  delay(2000);

  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH); //The Number 3 will be displayed
  digitalWrite(ledPin7,HIGH);
  digitalWrite(ledPin9,HIGH);
  digitalWrite(ledPin11,HIGH);

  digitalWrite(ledPin8,LOW);
  digitalWrite(ledPin10,LOW);

  delay(2000);
 
  digitalWrite(ledPin7,HIGH);
  digitalWrite(ledPin9,HIGH); //The Number 4 will be displayed
  digitalWrite(ledPin10,HIGH);
  digitalWrite(ledPin11,HIGH);

  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6,LOW);
  digitalWrite(ledPin8,LOW);

  delay(2000);
  
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH); //The Number 5 will be displayed
  digitalWrite(ledPin7,HIGH);
  digitalWrite(ledPin9,HIGH);
  digitalWrite(ledPin10,HIGH);

  digitalWrite(ledPin8,LOW);
  digitalWrite(ledPin11,LOW);

  delay(2000);

  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin7,HIGH); //The Number 6 will be displayed
  digitalWrite(ledPin8,HIGH);
  digitalWrite(ledPin9,HIGH);
  digitalWrite(ledPin10,HIGH);
  digitalWrite(ledPin11,HIGH);
  
  digitalWrite(ledPin6,LOW);
  
  delay(2000);
  
  digitalWrite(ledPin6,HIGH);
  digitalWrite(ledPin8,HIGH); //The Number 7 will be displayed
  digitalWrite(ledPin9,HIGH); 
  digitalWrite(ledPin11,HIGH);

  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin7,LOW);
  digitalWrite(ledPin10,LOW);

 delay(2000);
 
  }
