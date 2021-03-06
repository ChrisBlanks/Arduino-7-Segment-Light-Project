//Programmer: Chris Blanks
//Purpose: Make a simple 7-Segment LED system with red LEDs, 470 Ohm Resistors, and button switches.
//Note: The current code allows for the selection of the numbers 0 to 7, but could be extended further with extra LEDs and button switches.

// Initializing variable names to specific pin numbers
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
    
const int ledPin5 = 5;
const int ledPin6 = 6;
const int ledPin7 = 7;
const int ledPin8 = 8; 
const int ledPin9 = 9;
const int ledPin10 = 10;
const int ledPin11 = 11;


// Initializing states for the buttons ( 0 is the off state)
int buttonState1 = 0;         
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  
//Initializing LED pins as output
pinMode(ledPin5, OUTPUT);
pinMode(ledPin6, OUTPUT);
pinMode(ledPin7, OUTPUT);
pinMode(ledPin8, OUTPUT);
pinMode(ledPin9, OUTPUT);
pinMode(ledPin10, OUTPUT);
pinMode(ledPin11, OUTPUT);

//Initializing button pins as input
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
pinMode(buttonPin3, INPUT);
}

void loop() {
// The current digital value of each button pin is checked and stored into the buttonState variables (HIGH = on = 1, LOW = off = 0)
buttonState1 = digitalRead(buttonPin1);
buttonState2 = digitalRead(buttonPin2);
buttonState3 = digitalRead(buttonPin3);

// 8 Potential combinations for button inputs
if( buttonState1 == HIGH && buttonState2 == LOW && buttonState3 == LOW){
  digitalWrite(ledPin7,HIGH);
  digitalWrite(ledPin9,HIGH); //The Number 1 will be displayed
  digitalWrite(ledPin11,HIGH);

  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6,LOW);
  digitalWrite(ledPin8,LOW);
  digitalWrite(ledPin10,LOW);
 } 
else if(buttonState1 == LOW && buttonState2 == HIGH && buttonState3 == LOW){
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH); //The Number 2 will be displayed
  digitalWrite(ledPin8,HIGH);
  digitalWrite(ledPin9,HIGH);
  digitalWrite(ledPin11, HIGH);

  digitalWrite(ledPin7,LOW);
  digitalWrite(ledPin10,LOW);
  }

else if(buttonState1 == LOW && buttonState2 == LOW && buttonState3 == HIGH){
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH); //The Number 3 will be displayed
  digitalWrite(ledPin7,HIGH);
  digitalWrite(ledPin9,HIGH);
  digitalWrite(ledPin11,HIGH);

  digitalWrite(ledPin8,LOW);
  digitalWrite(ledPin10,LOW);
  } 
else if( buttonState1 == HIGH && buttonState2 == LOW && buttonState3 == HIGH){
  digitalWrite(ledPin7,HIGH);
  digitalWrite(ledPin9,HIGH); //The Number 4 will be displayed
  digitalWrite(ledPin10,HIGH);
  digitalWrite(ledPin11,HIGH);

  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin6,LOW);
  digitalWrite(ledPin8,LOW);
 } 
else if(buttonState1 == LOW && buttonState2 == HIGH && buttonState3 == HIGH){
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH); //The Number 5 will be displayed
  digitalWrite(ledPin7,HIGH);
  digitalWrite(ledPin9,HIGH);
  digitalWrite(ledPin10,HIGH);

  digitalWrite(ledPin8,LOW);
  digitalWrite(ledPin11,LOW);
  }

else if(buttonState1 == HIGH && buttonState2 == HIGH && buttonState3 == HIGH){
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin7,HIGH); //The Number 6 will be displayed
  digitalWrite(ledPin8,HIGH);
  digitalWrite(ledPin9,HIGH);
  digitalWrite(ledPin10,HIGH);
  digitalWrite(ledPin11,HIGH);
  
  digitalWrite(ledPin6,LOW);
  } 
else if( buttonState1 == HIGH && buttonState2 == HIGH && buttonState3 == LOW){
  digitalWrite(ledPin6,HIGH);
  digitalWrite(ledPin8,HIGH); //The Number 7 will be displayed
  digitalWrite(ledPin9,HIGH); 
  digitalWrite(ledPin11,HIGH);

  digitalWrite(ledPin5,LOW);
  digitalWrite(ledPin7,LOW);
  digitalWrite(ledPin10,LOW);
 }  // Cant represent higher numbers due to the limit of inputs to the system
/* else if(buttonState1 == LOW && buttonState2 ==  && buttonState3 == LOW){
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH); //The Number 8 will be displayed
  digitalWrite(ledPin8,HIGH);
  digitalWrite(ledPin9,HIGH);
  digitalWrite(ledPin11, HIGH);
  }

else if(buttonState3 == HIGH && buttonState1 == LOW && buttonState2 == LOW){
  digitalWrite(ledPin8,HIGH);
  digitalWrite(ledPin4,HIGH); //The Number 9 will be displayed
  digitalWrite(ledPin7,HIGH);
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin5, HIGH);
  } */
else{
  digitalWrite(ledPin5,HIGH);
  digitalWrite(ledPin6,HIGH);
  digitalWrite(ledPin7,HIGH); //The Number 0 will be displayed as the default
  digitalWrite(ledPin8,HIGH);
  digitalWrite(ledPin10, HIGH);
  digitalWrite(ledPin11, HIGH);

  digitalWrite(ledPin9, LOW);
    }
}
