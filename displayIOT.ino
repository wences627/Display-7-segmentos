int led1 = 9;
int led2 = 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(10, HIGH);

  delay(1000);

  digitalWrite(led1,LOW);
  digitalWrite(led2, LOW);
  digitalWrite(10, LOW);

  delay(1000);
  
  Serial.println("Hola Mundo");
  cero();
  uno();
  dos();
  tres();
  cuatro();
  cinco();
  seis();
  siete();
  ocho();
  nueve();
  
}
void cero(){
  digitalWrite(10,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(8,HIGH);
  
  delay(1500);
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(2,LOW);
  digitalWrite(8,LOW);
  
  delay(1500);
 }
 
void uno(){
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  
  delay(1000);
  
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  
  delay(1000);
 }

 void dos(){
  digitalWrite(10,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(3,HIGH);

  delay(1000);

  digitalWrite(10,LOW);
  digitalWrite(4,LOW);
  digitalWrite(8,LOW);
  digitalWrite(5,LOW);
  digitalWrite(3,LOW);

  delay(1000);
 }

 void tres(){
  digitalWrite(10,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(3,HIGH);

  delay(1000);

  digitalWrite(10,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(5,LOW);
  digitalWrite(3,LOW);

  delay(1000);
 }

 void cuatro(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(4,HIGH);

  delay(1000);
  
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(4,LOW);

  delay(1000);
 }

 void cinco(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(5,HIGH);

  delay(1000);
  
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(10,LOW);
  digitalWrite(4,LOW);

  delay(1000);
 }

 void seis(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);

  delay(1000);
  
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);

  delay(1000);
 }

 void siete(){
  digitalWrite(10,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  
  delay(1000);
  
  digitalWrite(10,LOW);
  digitalWrite(7,LOW);
  digitalWrite(4,LOW);
  
  delay(1000);
 }

 void ocho(){
  digitalWrite(10,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(3,HIGH);
  
  delay(1000);
  
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(2,LOW);
  digitalWrite(8,LOW);
  digitalWrite(3,LOW);
  
  delay(1000);
 }
 void nueve(){
  digitalWrite(10,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(3,HIGH);
  
  delay(1000);
  
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  
  delay(1000);
 }
 
