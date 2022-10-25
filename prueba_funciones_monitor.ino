int num1 = 0;
int num2 = 0;
int respuesta = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Serial.setTimeout(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){
  }
  num1=Serial.parseInt();
  num2=Serial.parseInt();
  delay(2000);
  Serial.print("Num 1 = ");
  Serial.println(num1);
  Serial.print("Num 2 = ");
  Serial.println(num2);
  respuesta = mult(num1,num2);
  Serial.println(respuesta);
}

int mult(int x, int y){
  return x*y;
}
//void setup() {
//  Serial.begin(9600);
//  Serial.println("**** Kilograms to pounds calculator ****");
//}
//
//void loop() {
//  Serial.print("Please enter weight in kg: ");
//
//  while (Serial.available() == 0) {
//  }
//
//  float weightKg = Serial.parseFloat();
//
//  Serial.println(weightKg);
//
//  float weightLbs = weightKg * 2.2046;
//
//  Serial.print("Weight in pounds: ");
//  Serial.println(weightLbs);
//
//}
