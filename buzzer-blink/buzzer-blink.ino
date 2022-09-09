const int buzzerPin = 14;
const int ledPin = 11;

void setup() {  
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {  
  // Morse Code "S"
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);    
  delay(200);
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);    
  delay(200);
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);    
  delay(1500);
  // Morse Code "O"
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);   
  delay(750);
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);    
  delay(750);
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);   
  delay(750);
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);    
  delay(750);
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);   
  delay(750);
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);    
  delay(750);
  // Morse Code "S"
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);    
  delay(200);
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);    
  delay(200);
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(ledPin, HIGH);   
  delay(200);                  
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);    
  delay(2000);                 
}
