int sensor = A1;
int led = 1;
int valor = 0; 
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(sensor);
  Serial.println(valor);
  // put your main code here, to run repeatedly:

}
