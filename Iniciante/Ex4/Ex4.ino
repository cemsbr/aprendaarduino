/*
  AprendaArduino.com
  Liga o LED por 1 segundo, em seguida desliga o LED por 1 segundo.

  Nesse exercício vamos manter 0 LED externo no pino 11 do
  Arduino e adicionar um LDR como sensor de temperatura
 */

int i;
int lumi;
int temp;
int soma_temp;
int lumi_percentual;


// a função setup() é executada quando você liga ou reinicia a placa
void setup() {
  // configura o pino 11 como saída:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  //
  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(8, LOW);
  delay(300);
  digitalWrite(9, LOW);
  delay(300);
  digitalWrite(10, LOW);
  delay(300);
  //
  
  Serial.begin(9600);
}

// a função loop() é executada para sempre:
void loop()
{
  //Faz conversão analogico-digital utilizando a entrada A0. lumi vai de 0 (0 volts) a 1023 (5 volts)
  lumi = analogRead(A0);
  //A função map mapeia um valor na escala de 0 a 1023 para um valor na escala de 0 a 100. É possível fazer as continhas no código mas a função map facilita a vida.
  lumi_percentual = map(lumi, 0, 1023, 0, 100); // Substitua o segundo e terceiro parametros para valores mais adequados com o seu ambiente.

  //Envia informações para a porta serial
  Serial.print("Luminosidade: ");
  Serial.print(lumi);
  Serial.print(" (");
  Serial.print(lumi_percentual);
  Serial.println("%)");
  
  // O que fazer quando a luminosidade está abaixo ou acima de um determinado nível?
  if( lumi_percentual < 10)
  {
    digitalWrite(9, HIGH);
  }

  else
  {
    digitalWrite(9, LOW);
  }

  // Faz média de 50 leituras do sensor LM35 para maior precisão
  soma_temp = 0;
  for( i = 0; i < 50; i++)
  {
    temp = analogRead(A1);
    soma_temp = soma_temp + temp;
  }

  soma_temp = soma_temp / 50;

  Serial.print("Temperatura: ");
  Serial.print(soma_temp * 100 * 5 / 1023.0);
  Serial.println(" C");
  Serial.println("");

  //O que fazer quando a temperatura está abaixo ou acima de um determinado nível?
  if( soma_temp * 100 * 5 / 1023.0 < 25 )
  {
    digitalWrite(10, HIGH);
    noTone(11);
  }

  else
  {
    digitalWrite(10, LOW);
    tone(11, 800);
  }
  
  delay(1000);
}
