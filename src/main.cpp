#include <Arduino.h>

//---Mapeamento de Hardware---//
#define LedRed 21
#define LedYellow 22
#define LedGreen 23

//---Protótipo das Funções Auxiliares---//
void Config();
void Red();
void Yellow();
void Green();
void Nothing();
void Everything();

//---Função Principal---//
void setup() 
{
  Config();  
}

//---Loop Infinito---//
void loop() {
  // Nothing();
  // Green();  
  // Yellow();
  // Red();
  Nothing();
  Everything();
}

//---Funções Auxiliares---//
void Config() {
  pinMode(LedRed,OUTPUT);
  pinMode(LedYellow,OUTPUT);
  pinMode(LedGreen,OUTPUT); 
}
//===========================================//
void Red() { 
  digitalWrite(LedRed,HIGH);
  digitalWrite(LedYellow,LOW);
  digitalWrite(LedGreen,LOW);
  delay(1000);
}
//===========================================//
void Yellow() {  
  digitalWrite(LedRed,LOW);
  digitalWrite(LedYellow,HIGH);
  digitalWrite(LedGreen,LOW);
  delay(1000);
}
//===========================================//
void Green() { 
  digitalWrite(LedRed,LOW);
  digitalWrite(LedYellow,LOW);
  digitalWrite(LedGreen,HIGH);
  delay(1000);
}
//===========================================//

void Nothing() {
  digitalWrite(LedRed, LOW);
  digitalWrite(LedYellow, LOW);
  digitalWrite(LedGreen, LOW);
  delay(500);
}

void Everything() {
  digitalWrite(LedRed, HIGH);
  digitalWrite(LedYellow, HIGH);
  digitalWrite(LedGreen, HIGH);
  delay(1000);
}
