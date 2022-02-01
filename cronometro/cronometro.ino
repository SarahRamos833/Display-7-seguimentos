//programação encontrada na internet e modificada para usar no meu projeto
//Sarah Ramos

#include "SevSeg.h" //biblioteca que facilita o uso do display de 7 seguimentos
SevSeg sevseg; //função da biblioteca

void setup() {
  byte numDigits = 4; //quantidade de digitos usada
  byte digitPins[] = {5, 4, 3, 2}; //pinos dos digitos
  byte segmentPins[] = {13, 12, 11, 10, 9, 8, 7, 6}; //pinos dos seguimentos
  //abaixo algumas configurações necessarias para a biblioteca funcionar - não mude aqui//
  bool resistorsOnSegments = false; // 'falso' significa que os resistores estão em pinos de dígitos
  byte hardwareConfig = COMMON_ANODE;
  bool updateWithDelays = false; //O padrão 'false' é recomendado
  bool leadingZeros = false; // Use 'true' se quiser manter os zeros à esquerda
  bool disableDecPoint = false; // Use 'true' se seu ponto decimal não existir ou não estiver conectado
  
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
  updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(90);
}

void loop() {
  static unsigned long timer = millis();
  static int deciSeconds = 0;
  
  if (millis() - timer >= 100) {
    timer += 100;
    deciSeconds++; //100 milissegundos é igual a 1 deciSecond
    
    if (deciSeconds == 10000) { // Redefinir para 0 após contar por 1000 segundos.
      deciSeconds=0;
    }
    sevseg.setNumber(deciSeconds, 1);
  }
  
  sevseg.refreshDisplay(); // Deve ser executado repetidamente
}
