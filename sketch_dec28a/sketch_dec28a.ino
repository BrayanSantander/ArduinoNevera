  //Pines Motor
int IN3 = 14; //D5
int IN4 = 12;  //D6

//pin bomba agua
int pin = 4; //D4

void setup() {
  pinMode(IN3 ,OUTPUT);
  pinMode(IN4 ,OUTPUT);
  pinMode(pin ,OUTPUT);
}

void loop() {
  //motor
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  delay(2000);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  delay(2000);
  
  digitalWrite(pin,HIGH);
  delay(2000);
  digitalWrite(pin,LOW);
  delay(2000);

}



