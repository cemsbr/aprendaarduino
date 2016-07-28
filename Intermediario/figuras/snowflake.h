#define snowflake_width 63
#define snowflake_height 64
static unsigned char snowflake_bits[] U8G_PROGMEM = {
   0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe3, 0xe3, 0x01, 0x00, 0x00,
   0x00, 0x00, 0xc0, 0xe7, 0xfb, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff,
   0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x03, 0x00, 0x00,
   0x00, 0x80, 0x81, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xff,
   0x3f, 0xf0, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xfc, 0x0f, 0xf0, 0x00, 0x00,
   0xf0, 0xc0, 0x03, 0xf0, 0x03, 0xf0, 0xc0, 0x03, 0xf8, 0xc3, 0x03, 0xe0,
   0x03, 0xf0, 0xf0, 0x07, 0xf8, 0xcf, 0x03, 0xe0, 0x03, 0xf0, 0xfc, 0x07,
   0xf8, 0xdf, 0x03, 0xe0, 0x03, 0xf0, 0xff, 0x07, 0xf8, 0xff, 0x83, 0xe1,
   0x63, 0xf0, 0xff, 0x07, 0xe0, 0xff, 0x83, 0xe7, 0x7b, 0xf0, 0xff, 0x01,
   0x80, 0xff, 0x83, 0xff, 0x7f, 0xf0, 0x7f, 0x00, 0x00, 0xfe, 0x8f, 0xff,
   0x7f, 0xf8, 0x1f, 0x00, 0x00, 0xfc, 0x9f, 0xff, 0x7f, 0xfe, 0x0f, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x80, 0xff, 0xff, 0xff,
   0xff, 0xff, 0x7f, 0x00, 0xc0, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x00,
   0xc0, 0x3f, 0xfe, 0xff, 0xff, 0x1f, 0xfe, 0x00, 0xc0, 0x0f, 0xf8, 0x1f,
   0xfc, 0x07, 0xf8, 0x00, 0x80, 0x03, 0xf0, 0x0f, 0xfc, 0x07, 0x60, 0x00,
   0x00, 0x00, 0xfc, 0x07, 0xf8, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07,
   0xf8, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xff, 0x07, 0xf0, 0x3f, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x07, 0xf8, 0x0f, 0x00, 0x00, 0x80, 0x03, 0xf0, 0x0f,
   0xfc, 0x07, 0x60, 0x00, 0xc0, 0x0f, 0xf0, 0x1f, 0xfc, 0x03, 0xf8, 0x00,
   0xc0, 0x1f, 0xfc, 0xff, 0xff, 0x0f, 0xfe, 0x00, 0xc0, 0x7f, 0xff, 0xff,
   0xff, 0xbf, 0xff, 0x00, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
   0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0xfc, 0xbf, 0xff,
   0x7f, 0xff, 0x0f, 0x00, 0x00, 0xfc, 0x8f, 0xff, 0x7f, 0xfc, 0x1f, 0x00,
   0x00, 0xff, 0x83, 0xff, 0x7f, 0xf0, 0x7f, 0x00, 0xc0, 0xff, 0x83, 0xe7,
   0x73, 0xf0, 0xff, 0x01, 0xf0, 0xff, 0x83, 0xe1, 0x63, 0xf0, 0xff, 0x03,
   0xf8, 0xff, 0x03, 0xe0, 0x03, 0xf0, 0xff, 0x07, 0xf8, 0xcf, 0x03, 0xe0,
   0x03, 0xf0, 0xfc, 0x07, 0xf8, 0xc3, 0x03, 0xe0, 0x03, 0xf0, 0xf0, 0x07,
   0xf0, 0xc0, 0x03, 0xf0, 0x03, 0xf0, 0xc0, 0x03, 0x40, 0xc0, 0x03, 0xfc,
   0x0f, 0xf0, 0x00, 0x00, 0x00, 0xc0, 0x03, 0xfe, 0x3f, 0xf0, 0x00, 0x00,
   0x00, 0x80, 0x81, 0xff, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff,
   0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xc0, 0xe7, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe3,
   0xe3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
   0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00 };
