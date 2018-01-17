const int doPin = 13;
void setup() {
  Serial.begin(9600);
  pinMode(doPin,OUTPUT);
  }

void loop(){
  
  int time1 = millis()/1000;
  digitalWrite(doPin,HIGH);
  delay(500);
  digitalWrite(doPin,LOW);
  delay(500);
  Serial.print(time1);
  Serial.println(" second have elapsed.");
}

