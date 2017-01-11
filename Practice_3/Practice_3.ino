int leds[]={3,4,5,6,7,8}, tiempo1=3000;
int tiempo2=500,n;

void setup() {
  for (n=0;n<6;n++){
    pinMode(leds[n],OUTPUT);
    }
}

void loop() {
  digitalWrite(leds[0],HIGH);
  digitalWrite(leds[5],HIGH);
  delay(tiempo1);
  digitalWrite(leds[5],LOW);
  digitalWrite(leds[4],HIGH);
  delay(tiempo2);
  digitalWrite(leds[4],LOW);
  digitalWrite(leds[3],HIGH);
  digitalWrite(leds[0],LOW);
  digitalWrite(leds[2],HIGH);
  delay(tiempo1);
  digitalWrite(leds[2],LOW);
  digitalWrite(leds[1],HIGH);
  delay(tiempo2);
  digitalWrite(leds[1],LOW);
  digitalWrite(leds[3],LOW);
}


