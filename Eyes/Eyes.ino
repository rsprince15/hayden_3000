/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int pir = 12;
int pirState = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  pirState = digitalRead(pir);
  
  if (pirState == HIGH) {
     digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(200);               // wait for a second
     digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
     delay(200);           
  }  // wait for a second
}
