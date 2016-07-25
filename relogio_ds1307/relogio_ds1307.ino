#include "U8glib.h"
#include <Wire.h>
#include <Time.h>
#include <DS1307RTC.h>
#include "jelly.h"
#include "jelly_flip.h"
#include "pusheen2.h"
#include "pusheen_flip2.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NO_ACK);  // Display which does not send AC
tmElements_t tm;
String hora;
char horaArray[10], tempArray[10];
unsigned int len = 10, flip = 0, jelly = 0;
float LM35;

void setup() {
  // put your setup code here, to run once:
  
}

void draw(void) {
  if (flip == 2) {
    u8g.setFont(u8g_font_helvB18);
    u8g.drawStr(10, 30, horaArray);
    u8g.setFont(u8g_font_helvB12);
    u8g.drawStr(10, 50, tempArray);
  } else {
    if (jelly){
    if (flip) u8g.drawXBMP(128-jelly_width, 0, jelly_width, jelly_height, jelly_bits);
    else u8g.drawXBMP(128-jelly_flip_width, 0, jelly_flip_width, jelly_flip_height, jelly_flip_bits);
  } else {
    if (flip) u8g.drawXBMP(128-pusheen_width, 0, pusheen_width, pusheen_height, pusheen_bits);
    else u8g.drawXBMP(100-pusheen_flip_width, 0, pusheen_flip_width, pusheen_flip_height, pusheen_flip_bits);
  }
  }
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  RTC.read(tm);
  hora = num2print(tm.Hour) + ":" + num2print(tm.Minute);
  hora.toCharArray(horaArray, len);

  LM35 = 0;
  for (int i = 0; i < 30; i++) {
   LM35 += analogRead(A1);
   delay(30);
  }
  LM35 = LM35*(5.0*100.0/(1023.0*30));
  ( String((int)LM35) + " C" ).toCharArray(tempArray,len);
  
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );

  if (flip == 2) flip = 0;
  else flip++;

  delay(10);

}

String num2print(int n){
  if (n < 10) return "0" + String(n);
  else return String(n);
}

