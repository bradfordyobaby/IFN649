//#include <SoftwareSerial.h>

#define rxPin 7
#define txPin 8

#define keyPin 9
//SoftwareSerial BTSerial = SoftwareSerial(rxPin, txPin);

void setup() 
{
  
  pinMode(keyPin, OUTPUT);
  digitalWrite(keyPin, HIGH); 
  Serial.begin(9600);
  Serial.println("Enter AT commands:");
  Serial1.begin(38400);    
  
}

void loop()
{
    
  // Keep reading from HC-05 and send to Arduino 
  // Serial Monitor
  if (Serial1.available()) {    
    Serial.write(Serial1.read());        
  }
    

  // Keep reading from Arduino Serial Monitor 
  //  and send to HC-05
  if (Serial.available()){
    Serial1.write(Serial.read());    
  }        

}
