void setup() {
  Serial.begin(9600);
}

void loop() {
  //Detecta los Movimientos en el eje Y
  if (analogRead(12) == 0){
    Serial.println("Aire");
    delay(100);
  } else if(analogRead(12) == 4095){
    Serial.println("Tierra");
    delay(100);
  }
  //Detecta los Movimientos en el eje X
  if (analogRead(13) == 0){
    Serial.println("Fuego");
    delay(100);
  } else if(analogRead(13) == 4095){
    Serial.println("Agua");
    delay(100);
  }
  //Detecta las pulsaciones del JoyStick
  if (analogRead(14) <= 300){
    Serial.println("Avatar");
    delay(100);
  }
}
