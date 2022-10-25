int led = 2;

void setup() {
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
}
