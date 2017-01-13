int corto=100;
int largo=300;
int pausa=300;
int espera=1000;
int n=0;
int zumb=13;

void setup() {
    pinMode(zumb,OUTPUT);
}

void loop() {
  for(n=0;n<3;n++){
    digitalWrite(zumb,HIGH);
    delay(corto);
    digitalWrite(zumb,LOW);
    delay(corto);
    }
  delay(pausa);
  for(n=0;n<3;n++){
    digitalWrite(zumb,HIGH);
    delay(largo);
    digitalWrite(zumb,LOW);
    delay(corto);
    }
  delay(pausa);
  for(n=0;n<3;n++){
    digitalWrite(zumb,HIGH);
    delay(corto);
    digitalWrite(zumb,LOW);
    delay(corto);
    }
  delay(espera);
}
