//Codigo criado por Sarah Ramos de um contador de 0-9 com display de 7 seguimentos programados um por um

void setup() {
 pinMode(2, OUTPUT); //pino positivo do digito
 pinMode(13, OUTPUT); // A
 pinMode(12, OUTPUT); // B
 pinMode(11, OUTPUT); // C
 pinMode(10, OUTPUT); // D
 pinMode(9, OUTPUT); // E
 pinMode(8, OUTPUT); // F
 pinMode(7, OUTPUT); // G
}

void loop() {
digitalWrite(2, HIGH); //LIGADO
//1
digitalWrite(13, LOW); //A
digitalWrite(12, LOW);//B
digitalWrite(11, LOW);//C
digitalWrite(10, LOW);//D
digitalWrite(9, LOW);//E
digitalWrite(8, LOW);//F
digitalWrite(7, HIGH);//G
delay(1000);
//1
digitalWrite(13, HIGH);//A
digitalWrite(12, LOW);//B
digitalWrite(11, LOW);//C
digitalWrite(10, HIGH);//D
digitalWrite(9,HIGH);//E
digitalWrite(8,HIGH);//F
digitalWrite(7,HIGH);//G
delay(1000);
//2
digitalWrite(13, LOW); //A
digitalWrite(12, LOW);//B
digitalWrite(11, HIGH);//C
digitalWrite(10, LOW);//D
digitalWrite(9, LOW);//E
digitalWrite(8, HIGH);//F
digitalWrite(7, LOW);//G
delay(1000);
//3
digitalWrite(13, LOW);//A
digitalWrite(12, LOW);//B
digitalWrite(11, LOW);//C
digitalWrite(10, LOW);//D
digitalWrite(9,HIGH);//E
digitalWrite(8,HIGH);//F
digitalWrite(7,LOW);//G
delay(1000);
//4
digitalWrite(13, HIGH);//A
digitalWrite(12, LOW);//B
digitalWrite(11, LOW);//C
digitalWrite(10, HIGH);//D
digitalWrite(9,HIGH);//E
digitalWrite(8,LOW);//F
digitalWrite(7,LOW);//G
delay(1000);
//5
digitalWrite(13, LOW); //A
digitalWrite(12, HIGH);//B
digitalWrite(11, LOW);//C
digitalWrite(10, LOW);//D
digitalWrite(9, HIGH);//E
digitalWrite(8, LOW);//F
digitalWrite(7, LOW);//G
delay(1000);
//6
digitalWrite(13, LOW);//A
digitalWrite(12, HIGH);//B
digitalWrite(11, LOW);//C
digitalWrite(10, LOW);//D
digitalWrite(9,LOW);//E
digitalWrite(8,LOW);//F
digitalWrite(7,LOW);//G
delay(1000);
//7
digitalWrite(13, LOW);//A
digitalWrite(12, LOW);//B
digitalWrite(11, LOW);//C
digitalWrite(10, HIGH);//D
digitalWrite(9,HIGH);//E
digitalWrite(8,HIGH);//F
digitalWrite(7,HIGH);//G
delay(1000);
//8
digitalWrite(13, LOW); //A
digitalWrite(12, LOW);//B
digitalWrite(11, LOW);//C
digitalWrite(10, LOW);//D
digitalWrite(9, LOW);//E
digitalWrite(8, LOW);//F
digitalWrite(7, LOW);//G
delay(1000);
//9
digitalWrite(13, LOW);//A
digitalWrite(12, LOW);//B
digitalWrite(11, LOW);//C
digitalWrite(10, HIGH);//D
digitalWrite(9,HIGH);//E
digitalWrite(8,LOW);//F
digitalWrite(7,LOW);//G
delay(1000);

}
