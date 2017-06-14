#include <SoftwareSerial.h>
SoftwareSerial mySerial(3,2); // Arduino RX:4, TX:5  
void setup()
{
  mySerial.begin(115200);
  Serial.begin(9600);
}
void loop() // run over and over
{
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
 
  if (Serial.available()) {
    char chars = Serial.read();
    mySerial.write(chars);
  }
}
