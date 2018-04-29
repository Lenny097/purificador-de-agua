//Codigo
int boton1 = 2;
int sensor1 = 3;
int motor1 = 4;
int boton2 = 5;
int sensor2 = 6;
int motor2 = 7;
int boton3 = 8;
int sensor3 = 9;
int motor3 = 10;
int boton4 = 11;
int sensor4 = 12;
int motor4 = 13;
int motorbat1 = 14;
int motorbat2 = 15;
int motorbat3 = 16;
int motorbat4 = 17;
void setup(){
pinMode(boton1,INPUT);
pinMode(sensor1,INPUT);
pinMode(motor1,OUTPUT);
digitalWrite(motor1,LOW);
pinMode(boton2,INPUT);
pinMode(sensor2,INPUT);
pinMode(motor2,OUTPUT);
digitalWrite(motor2,LOW);
pinMode(boton3,INPUT);
pinMode(sensor3,INPUT);
pinMode(motor3,OUTPUT);
digitalWrite(motor3,LOW);
pinMode(boton4,INPUT);
pinMode(sensor4,INPUT);
pinMode(motor4,OUTPUT);
digitalWrite(motor4,LOW);
}
void botones(){
  if (digitalRead(boton1) == HIGH && digitalRead(sensor1) == LOW){ 
(digitalWrite(motor1,HIGH));
}
if (digitalRead(boton2) == HIGH && digitalRead(sensor2) == LOW){ 
(digitalWrite(motor2,HIGH));
}
if (digitalRead(boton3) == HIGH && digitalRead(sensor3) == LOW){ 
(digitalWrite(motor3,HIGH));
}
if (digitalRead(boton4) == HIGH && digitalRead(sensor4) == LOW){ 
(digitalWrite(motor4,HIGH));
}
}
//Funcion de encendido de batidoras
void encenderBatidoras(int nroBatidora){
  digitalWrite(nroBatidora,HIGH);
  }



void loop(){
botones();
}
