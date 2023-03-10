/setup default LED on pin 13
const int ledPin =  13;
//setup touch sensor on pin 3
const int touchPin = 4;
 
//store the time when last event happened
unsigned long lastEvent = 0;
//store the state of LED
boolean ledOn = false;
 
//setup pins
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(touchPin, INPUT);
}
 
void loop(){
  //read touch sensor state
  int touchState = digitalRead(touchPin);
 
  //only interested in the HIGH signal
  if (touchState == HIGH) {
    //if 50ms have passed since last HIGH pulse, it means that the
    //touch sensor has been touched, released and touched again
    if (millis() - lastEvent > 50) {
      //toggle LED and set the output
      ledOn = !ledOn;
      digitalWrite(ledPin, ledOn ? HIGH : LOW);
    }
 
    //remember when last event happened
    lastEvent = millis();
  }
}