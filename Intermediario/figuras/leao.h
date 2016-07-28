#define leao_width 58
#define leao_height 64
static unsigned char leao_bits[] U8G_PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xf8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc,
   0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xe7, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff,
   0xff, 0x07, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00,
   0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff,
   0xff, 0x3f, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xdf, 0x7f, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x8f, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff,
   0xc7, 0xff, 0x11, 0x00, 0x80, 0xff, 0xff, 0xff, 0xe0, 0xff, 0x33, 0x00,
   0xc0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0x37, 0x00, 0xc4, 0xff, 0x3f, 0x7f,
   0xe0, 0xff, 0x37, 0x00, 0xe4, 0xff, 0x37, 0x3f, 0xc0, 0xff, 0x3f, 0x00,
   0xec, 0xff, 0x07, 0x1c, 0x00, 0xff, 0x0f, 0x00, 0xf4, 0xff, 0x01, 0x00,
   0x00, 0xf8, 0x0f, 0x00, 0xf4, 0x7f, 0x00, 0x00, 0x00, 0x80, 0x1f, 0x00,
   0xfc, 0x3f, 0x03, 0x00, 0xc0, 0x87, 0x1f, 0x00, 0xfc, 0x9f, 0x0f, 0x00,
   0xe0, 0x0f, 0x1f, 0x00, 0xf8, 0xcf, 0x09, 0x00, 0x20, 0x1f, 0x1f, 0x00,
   0xf8, 0xe3, 0x09, 0x00, 0x20, 0x1f, 0x1e, 0x00, 0xf8, 0xf1, 0x09, 0x00,
   0xe0, 0x1f, 0x1e, 0x00, 0xf8, 0xf1, 0x0f, 0x78, 0xc0, 0x1f, 0x3e, 0x00,
   0xf8, 0xf1, 0x0f, 0xff, 0x81, 0x1f, 0x3e, 0x00, 0xf8, 0xf1, 0x87, 0xff,
   0x01, 0x87, 0x3f, 0x00, 0xf8, 0xc1, 0x81, 0xff, 0x01, 0x80, 0x3f, 0x00,
   0xf8, 0x01, 0xb0, 0xff, 0x01, 0x80, 0x3f, 0x00, 0xf8, 0x03, 0x10, 0x7f,
   0x30, 0x80, 0x3f, 0x00, 0xf8, 0x03, 0x10, 0x38, 0x10, 0x80, 0x3f, 0x00,
   0xf0, 0x03, 0x20, 0x10, 0x10, 0x80, 0x3f, 0x00, 0xf0, 0x03, 0x60, 0x10,
   0x08, 0x80, 0x3f, 0x00, 0x00, 0x00, 0xc0, 0x28, 0x04, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xc7, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00,
   0xf8, 0x1f, 0x00, 0x80, 0x07, 0x0f, 0xf8, 0x00, 0xf8, 0x1f, 0x7e, 0xe0,
   0x9f, 0x0f, 0x78, 0x00, 0xe0, 0x03, 0xff, 0xf0, 0x9f, 0x0f, 0x78, 0x00,
   0xe0, 0x83, 0xff, 0xf9, 0xbf, 0x07, 0x78, 0x00, 0xe0, 0x83, 0xff, 0xf9,
   0xbf, 0x07, 0x78, 0x00, 0xe0, 0x83, 0xff, 0xfb, 0xbf, 0x07, 0x78, 0x00,
   0xe0, 0x83, 0xff, 0xfb, 0xbf, 0x07, 0x78, 0x00, 0xe0, 0x81, 0xff, 0xff,
   0xbf, 0x07, 0x78, 0x00, 0xe0, 0x81, 0xff, 0xff, 0xbf, 0x07, 0x78, 0x00,
   0xe0, 0x81, 0xff, 0xff, 0xbf, 0x07, 0x78, 0x00, 0xe0, 0x81, 0xff, 0xff,
   0x9f, 0x07, 0x78, 0x00, 0xe0, 0x81, 0xff, 0xff, 0x9f, 0x03, 0x7c, 0x00,
   0xe0, 0x01, 0xff, 0xff, 0x8f, 0x03, 0x7c, 0x00, 0xe0, 0x03, 0xfe, 0xff,
   0x87, 0x03, 0x7e, 0x00, 0xe0, 0x03, 0xfe, 0xff, 0x87, 0x03, 0x3e, 0x00,
   0xe0, 0x03, 0xfc, 0xff, 0x83, 0x07, 0x3e, 0x00, 0xe0, 0x03, 0xf8, 0xff,
   0x81, 0x07, 0x3f, 0x00, 0xe0, 0x03, 0xf0, 0x7f, 0x80, 0x87, 0x1f, 0x00,
   0xe0, 0x03, 0xe0, 0x3f, 0x80, 0xff, 0x3f, 0x00, 0xe0, 0x1f, 0x80, 0x1f,
   0x00, 0xff, 0x1b, 0x00, 0xf0, 0x1f, 0x00, 0x0f, 0x00, 0xfe, 0x19, 0x00,
   0x30, 0x00, 0x00, 0x02, 0x00, 0x7c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
