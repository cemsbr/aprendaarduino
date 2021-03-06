/*
  AprendaArduino.com
  Liga o LED por 1 segundo, em seguida desliga o LED por 1 segundo.
  Lê o LDR na porta analógica.

  Nesse exercício vamos manter o LED externo nos pinos 11, 10 e 9 do
  Arduino e adicionar um LDR como sensor de temperatura
 */


// a função setup() é executada quando você liga ou reinicia a placa
void setup() {
  // configura o pino 11 como saída:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT); // Configura o novo pino, 10, como saida
  pinMode(9, OUTPUT); // Configura o novo pino, 9, como saida

  Serial.begin(9600);
}

// a função loop() é executada para sempre:
void loop() {
  digitalWrite(11, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino 11)
  digitalWrite(10, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino 10)
  digitalWrite(9, HIGH);   // liga o LED (escreve o nível HIGH - 5V - no pino 9)
  delay(1000);              // espera 1 segundo = 1000 milisegundos
  digitalWrite(11, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino 11)
  digitalWrite(10, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino 10)
  digitalWrite(9, LOW);    // desliga o LED (escreve o nível LOW - 0V - no pino 9)
  delay(1000);              // espera 1 segundo novamente

  int lumi = analogRead(A0); // le o sensor analogico na porta A0 - escala de 0 a 1023
  Serial.print("Luminosidade: "); // escreve a palavra "Luminosidade: " no monitor do computador
  Serial.println(lumi); // escreve o valor da luminosidade lida na tela do computador
  delay(1000);

}
