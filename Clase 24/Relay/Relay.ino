int relayPin =2;

void setup(){
  pinMode(relayPin,OUTPUT);
  Serial.begin(115200);
}

void loop(){
  if(Serial.available()){
    String cmd = Serial.readString();
    if(cmd == "on"){
      digitalWrite(relayPin,HIGH);
    }else if (cmd == "off"){
      digitalWrite(relayPin,LOW);
    }
  }
}