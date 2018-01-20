
const int doPin =13;
void setup() {
  pinMode(doPin,OUTPUT);
   Serial.begin(9600);
 }
void loop() {
  
  digitalWrite(doPin,HIGH);
  delay(100);
  digitalWrite(doPin,LOW);
  delay(1000); 
 }

