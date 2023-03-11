//Declarando variables 
const int led_pinR = 2;
const int led_pinG = 4;
const int led_pinB = 5;

void setup() {
  pinMode(led_pinR, OUTPUT);
  pinMode(led_pinG, OUTPUT);
  pinMode(led_pinB, OUTPUT);
}

void loop() {
digitalWrite(led_pinR, HIGH);
delay(2000);
digitalWrite(led_pinR, LOW);
delay(2000);
digitalWrite(led_pinG, HIGH);
delay(2000);
digitalWrite(led_pinG, LOW);
delay(2000);
digitalWrite(led_pinB, HIGH);
delay(2000);
digitalWrite(led_pinB, LOW);
delay(2000);

digitalWrite(led_pinR, HIGH);
digitalWrite(led_pinG, HIGH);
digitalWrite(led_pinB, HIGH);

delay(2000);

digitalWrite(led_pinR, LOW);
digitalWrite(led_pinG, LOW);
digitalWrite(led_pinB, LOW);
}
