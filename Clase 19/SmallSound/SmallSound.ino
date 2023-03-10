const int pin = 14; 

void setup() {
  pinMode(pin, INPUT);
  Serial.begin(115200);
}
 
void loop(){
  int soundbeibi = digitalRead(pin);
  Serial.println(soundbeibi);
  delay(1000);
}