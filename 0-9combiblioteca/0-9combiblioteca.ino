//codigo do contador de 0-9 com uma biblioteca que facilita. Encontrado na internet e modificado por Sarah Ramos

#include "SevSeg.h"
SevSeg setSeg;

void setup()
{
  //Definido como 1 para exibição de um dígito
  byte numDigitos = 1;

  //define pinos comuns ao usar display de vários dígitos. Deixado vazio, pois temos um display de um único dígito
  byte digitPinos[] = {5};

  //Define as conexões de pinos do Arduino na ordem: A, B, C, D, E, F, G, DP
  byte pinosDisplay[] = {13, 12, 11, 10, 9, 8, 7};
  bool resistoresSegmentos = true;

  //Inicialize o objeto setSeg. Remova o comentário da segunda linha se você usar o display de 7 segmentos de cátodo comum
  setSeg.begin(COMMON_ANODE, numDigitos, digitPinos, pinosDisplay, resistoresSegmentos);
  //setSeg.begin(COMMON_CATHODE, numDigitos, digitPinos, pinosDisplay, resistoresSegmentos);

  setSeg.setBrightness(90);
}

void loop()
{ 
   //Exibir números um por um com 2 segundos de atraso
   for(int i = 0; i < 10; i++)
   {
     setSeg.setNumber(i);
     setSeg.refreshDisplay(); 
     delay(1000);
   }
}
