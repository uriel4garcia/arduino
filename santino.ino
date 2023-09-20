int pot=2;
int led=13; 
int val=0;




void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(pot);
digitalWrite(led, HIGH);
delay(val);
digitalWrite(led, LOW);
delay(val);
}
