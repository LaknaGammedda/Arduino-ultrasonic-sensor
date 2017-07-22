#include <LiquidCrystal.h>
const int pingPinS=7;
const int pingPinN=8;
const int pingPinW=6;
const int pingPinE=9;
const int ledN=4;
const int ledS=12;
const int ledW=10;
const int ledE=13;
long mesafe, cm;
long mesafeN, cmN;
long mesafeE, cmE;
long mesafeW, cmW;


void setup(){
  
}
  
void loop(){
  
//south uv  
pinMode(pingPinS, OUTPUT);
pinMode(ledN, OUTPUT);

digitalWrite(pingPinS, LOW);
delayMicroseconds(2);
digitalWrite(pingPinS, HIGH);
delayMicroseconds(5);
digitalWrite(pingPinS, LOW);

pinMode(pingPinS, INPUT);
mesafe = pulseIn(pingPinS, HIGH);

//mesafeyi cm ye donustur
cm = mesafe / 58;
//Noth
pinMode(pingPinN, OUTPUT);
pinMode(ledS, OUTPUT);

digitalWrite(pingPinN, LOW);
delayMicroseconds(2);
digitalWrite(pingPinN, HIGH);
delayMicroseconds(5);
digitalWrite(pingPinN, LOW);

pinMode(pingPinN, INPUT);
mesafeN = pulseIn(pingPinN, HIGH);

//mesafeyi cm ye donustur
cmN = mesafeN / 58;
//East
pinMode(pingPinE, OUTPUT);
pinMode(ledW, OUTPUT);

digitalWrite(pingPinE, LOW);
delayMicroseconds(2);
digitalWrite(pingPinE, HIGH);
delayMicroseconds(5);
digitalWrite(pingPinE, LOW);

pinMode(pingPinE, INPUT);
mesafeE = pulseIn(pingPinE, HIGH);

//mesafeyi cm ye donustur
cmE = mesafeE / 58;

//West
pinMode(pingPinW, OUTPUT);
pinMode(ledE, OUTPUT);

digitalWrite(pingPinW, LOW);
delayMicroseconds(2);
digitalWrite(pingPinW, HIGH);
delayMicroseconds(5);
digitalWrite(pingPinW, LOW);

pinMode(pingPinW, INPUT);
mesafeW = pulseIn(pingPinW, HIGH);

//mesafeyi cm ye donustur
cmW = mesafeW / 58;  
  
  
delay(250);   // 0.25sn bekle
  if(cm>100){
  digitalWrite(ledN, HIGH);
  delay(250);
  digitalWrite(ledN, LOW);
  delay(250);
  }else if(cmN>100){
  digitalWrite(ledS, HIGH);
  delay(250);
  digitalWrite(ledS, LOW);
  delay(250);
  }else if(cmE>100){
  digitalWrite(ledW, HIGH);
  delay(250);
  digitalWrite(ledW, LOW);
  delay(250);
  }else if(cmW>100){
  digitalWrite(ledE, HIGH);
  delay(250);
  digitalWrite(ledE, LOW);
  delay(250);
  }
Serial.println("cm");


}
