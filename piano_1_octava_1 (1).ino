#define NOTE_C5  523    //Do
#define NOTE_D5  587    //Re
#define NOTE_E5  659    //Mi
#define NOTE_F5  698    //Fa
#define NOTE_G5  784    //Sol
#define NOTE_A5  880    //La
#define NOTE_B5  988    //Si
#define NOTE_C6  1047    //Do6

int botonDO = 12;
int botonRE = 11;
int botonMI = 10;
int botonFA = 9;
int botonSOL = 8;
int botonLA = 7;
int botonSI = 6;
int botonDO6 = 5;

int rojo = 13;
int azul = 4;
int verde = 2;

void setup(){
  for (int pin = 5; pin <= 11; pin++) {
    pinMode(pin, INPUT_PULLUP);
 }
  pinMode(botonDO, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop(){
   if(digitalRead(botonDO) == LOW){
    tone(3,523,1);
    analogWrite(rojo, 255);
    analogWrite(azul, 0);
    analogWrite(verde, 0);
  } 
  if(digitalRead(botonRE) == LOW){
    tone(3,587,1);
    analogWrite(rojo, 255);
    analogWrite(azul, 67);
    analogWrite(verde, 127);
  }
  if(digitalRead(botonMI) == LOW){
    tone(3,659,1);
    analogWrite(rojo, 255);
    analogWrite(azul, 125);
    analogWrite(verde, 255);
  }
  if(digitalRead(botonFA) == LOW){
    tone(3,698,1);
    analogWrite(rojo, 0);
    analogWrite(azul, 0);
    analogWrite(verde, 255);
  }
  if(digitalRead(botonSOL) == LOW){
    tone(3,784,1);
    analogWrite(rojo, 0);
    analogWrite(azul, 255);
    analogWrite(verde, 255);
  }
  if(digitalRead(botonLA) == LOW){
    tone(3,880,1);
    analogWrite(rojo, 0);
    analogWrite(azul, 255);
    analogWrite(verde, 0);
  }
  if(digitalRead(botonSI) == LOW){
    tone(3,988,1);
    analogWrite(rojo, 255);
    analogWrite(azul, 255);
    analogWrite(verde, 0);
  }
  if(digitalRead(botonDO6) == LOW){
    tone(3,1047,1);
    analogWrite(rojo, 207);
    analogWrite(azul, 118);
    analogWrite(verde, 52);
  }
  else{
    analogWrite(rojo, 0);
    analogWrite(azul, 0);
    analogWrite(verde, 0);
  }
}