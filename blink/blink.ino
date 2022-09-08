const int ledPin = 13; // Teensy 2.0 has the LED on pin 11

void setup() {  
  pinMode(ledPin, OUTPUT);
}
void loop() {
  // Morse Code "S"
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(ledPin, LOW);    
  delay(200);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(ledPin, LOW);    
  delay(200);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(ledPin, LOW);    
  delay(1500);
  // Morse Code "O"
  digitalWrite(ledPin, HIGH);   
  delay(750);
  digitalWrite(ledPin, LOW);    
  delay(750);
  digitalWrite(ledPin, HIGH);   
  delay(750);
  digitalWrite(ledPin, LOW);    
  delay(750);
  digitalWrite(ledPin, HIGH);   
  delay(750);
  digitalWrite(ledPin, LOW);    
  delay(750);
  // Morse Code "S"
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(ledPin, LOW);    
  delay(200);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(ledPin, LOW);    
  delay(200);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(ledPin, LOW);    
  delay(2000);                 
}
