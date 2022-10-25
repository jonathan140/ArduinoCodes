int sensorpri = 11; //pin sensor
int buzzer = 3;//pin buzzer
int valor = 0;//variable
int led = 12;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(sensorpir,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);//para esp 115200
}

void loop() {
  valor = digitalRead(sensorpir);
  Serial.println(valor);
  if(valor == HIGH){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    //tone(buzzer,261,120); no coloca nada en el else
  }
  else {
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
  }
}
