//Se declara el potenciometro
int pon=0;

// Se declara el boton en el cual es como un reset 
int boton=6;

// Se declara los led que voy a ocupar en este caso son 3 los conductores y 2 del peaton 
int led1=1;
int led2=2;
int led3=3;
int led4=4;
int led5=5;




void setup() {

// Se inicializan los leds y el boton 
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(boton, INPUT);
}

void loop() {

//Se le asigna el analogo 0 a la variable del potenciometro, el cual detectara los valore de lectura del potenciometro  
 pon=analogRead(A0);

// ciclo en el cual se va a repetir el prendido y el apagado de los leds
if(digitalRead(boton)==LOW){
  digitalWrite(led1,LOW);
  digitalWrite(led5,LOW); 
  delay(pon);
  digitalWrite(led1,HIGH);
  digitalWrite(led5,HIGH);
//ciclo en el cual el led del medio se prende y apaga
for(int ciclo=0; ciclo<2;ciclo++){
   delay(pon);
   digitalWrite(led1,HIGH);
   delay(pon);
   digitalWrite(led1,LOW);
} 


for(int ciclo=0; ciclo<2;ciclo++){
 delay(pon);
 digitalWrite(led2,HIGH);
 delay(pon);
 digitalWrite(led2,LOW);
 digitalWrite(led1,LOW);
}
    
digitalWrite(led5,LOW);
digitalWrite(led4,HIGH);
digitalWrite(led3,HIGH);
delay(pon);
digitalWrite(led4,LOW);
digitalWrite(led3,LOW);  
}
else {
digitalWrite(led1,LOW);
digitalWrite(led5,LOW);  
delay(pon);
digitalWrite(led1,HIGH);
digitalWrite(led5,HIGH);

for(int ciclo=0; ciclo<2;ciclo++){
   delay(pon);
   digitalWrite(led1,HIGH);
   delay(pon);
   digitalWrite(led1,LOW);
}

for(int ciclo=0; ciclo<2;ciclo++){
  delay(pon);
  digitalWrite(led2,HIGH);
  delay(pon);
  digitalWrite(led2,LOW);
  digitalWrite(led1,LOW);
}
   
 digitalWrite(led5,LOW);
 digitalWrite(led4,HIGH);
 digitalWrite(led3,HIGH);
 delay(pon);
 digitalWrite(led4,LOW);
 digitalWrite(led3,LOW);
  }
}
