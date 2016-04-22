/*
  AprendaArduino.com

  Exemplo: Usando o potenciometro para controlar
  o brilho de um LED.

  Conectar o LED ao pino 9 e o cursor do potenciometro
  ao pino A0.
*/

// the setup routine runs once when you press reset:
void setup() {
  pinMode(9, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // Le a posicao do cursor (0 a 1023):
  int sensorValue = analogRead(A0);
  // Converte a leitura da escala de 0 a 1023 para escala de 0 a 254:
  int brilho = map(sensorValue, 0, 1023, 0, 254);
  // Ajusta o brilho:
  analogWrite(9, brilho);
  delay(10);
}
