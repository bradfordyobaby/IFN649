const int ledPin = 11; // Teensy 2.0 has the LED on pin 11

void setup() {  
  pinMode(ledPin, OUTPUT);
}
void loop() {
  // Morse Code "S"
  digitalWrite(ledPin, HIGH);   
  delay(250);                  
  digitalWrite(ledPin, LOW);    
  delay(250);
  digitalWrite(ledPin, HIGH);   
  delay(250);                  
  digitalWrite(ledPin, LOW);    
  delay(250);
  digitalWrite(ledPin, HIGH);   
  delay(250);                  
  digitalWrite(ledPin, LOW);    
  delay(1500);
  // Morse Code "O"
  digitalWrite(ledPin, HIGH);   
  delay(1000);
  digitalWrite(ledPin, LOW);    
  delay(1000);
  digitalWrite(ledPin, HIGH);   
  delay(1000);
  digitalWrite(ledPin, LOW);    
  delay(1000);
  digitalWrite(ledPin, HIGH);   
  delay(1000);
  digitalWrite(ledPin, LOW);    
  delay(1000);
  // Morse Code "S"
  digitalWrite(ledPin, HIGH);   
  delay(250);                  
  digitalWrite(ledPin, LOW);    
  delay(250);
  digitalWrite(ledPin, HIGH);   
  delay(250);                  
  digitalWrite(ledPin, LOW);    
  delay(250);
  digitalWrite(ledPin, HIGH);   
  delay(250);                  
  digitalWrite(ledPin, LOW);    
  delay(3000);                 
}
