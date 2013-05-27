int pot = A2;
int val = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
   val = analogRead(pot);
   delay(500);
   Serial.println(val);
}

