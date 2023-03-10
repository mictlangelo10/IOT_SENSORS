const int pin  = 14;

void setup(){
  pinMode(pin,INPUT);
  Serial.begin(115200);
}

void loop(){
  int fiesta = digitalRead(pin);
  Serial.println(fiesta);
  delay(1000);
}