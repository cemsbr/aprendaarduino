#include <Sodaq_DS3231.h>

#include "U8glib.h"
#include <Wire.h>
#include "jelly.h"
#include "jelly_flip.h"
#include "pusheen.h"
#include "pusheen_flip.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NO_ACK);  // Display which does not send AC

unsigned int len = 10, flip = 0, show_jelly = 0;
String hora;
char horaArray[10], tempArray[10];
uint32_t old_ts;

void setup() {

    Serial.begin(9600); // Inicializa comunicação serial com o computador
    Wire.begin();      // Inicializa comunicação I2C
    rtc.begin();      // Inicializa comunicação com o módulo RTC
}

void loop() {

  DateTime now = rtc.now();     // Adquire o horário atual do módulo RTC
  uint32_t ts = now.getEpoch(); // Adquire horário atual em forma de timestamp

  if (old_ts == 0 || old_ts != ts) { //Verifica timestamp para executar este bloco apenas uma vez por segundo
    old_ts = ts;

    rtc.convertTemperature();     // Grava temperatura atual nos registradores
    float temperatura = rtc.getTemperature(); // Lê esses registradores e armazena na variavel temperatura

    hora = num2print(now.hour()) + ":" + num2print(now.minute()) + ":" + num2print(now.second());
    hora.toCharArray(horaArray, len);
    (String(int(temperatura)) + " C").toCharArray(tempArray,len);

    // Utilize este bloco para observar o funcionamento do RTC no serial monitor //
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.date(), DEC);
    Serial.print(' ');
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.print(' ');
    Serial.print(temperatura);
    Serial.println(" C");
    // Utilize este bloco para observar o funcionamento do RTC no serial monitor //

    u8g.firstPage();
    do {
      draw();
    } while( u8g.nextPage() );

    flip = !flip;
  }
}

void draw(void) {
  u8g.setFont(u8g_font_helvB14);
  u8g.drawStr(10, 20, horaArray);
  u8g.setFont(u8g_font_helvB12);
  u8g.drawStr(30, 50, tempArray);
  if (show_jelly) {
    if (flip) u8g.drawXBMP(128-jelly_width, 0, jelly_width, jelly_height, jelly_bits);
    else u8g.drawXBMP(128-jelly_flip_width, 0, jelly_flip_width, jelly_flip_height, jelly_flip_bits);
  } else {
    if (flip) u8g.drawXBMP(128-pusheen_width, 0, pusheen_width, pusheen_height, pusheen_bits);
    else u8g.drawXBMP(128-pusheen_flip_width, 0, pusheen_flip_width, pusheen_flip_height, pusheen_flip_bits);
  }


}

String num2print(int n){
  if (n < 10) return "0" + String(n);
  else return String(n);
}
