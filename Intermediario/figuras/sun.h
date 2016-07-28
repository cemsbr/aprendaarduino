#define sun_width 64
#define sun_height 63
static unsigned char sun_bits[] U8G_PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x80, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x06, 0xc0,
   0x03, 0x60, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xc0, 0x03, 0x30, 0x00, 0x00,
   0x00, 0x00, 0x1c, 0xc0, 0x03, 0x38, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0,
   0x03, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x78, 0xe0, 0x07, 0x1e, 0x00, 0x00,
   0x00, 0x00, 0xf8, 0xe0, 0x07, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xe1,
   0x87, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x03, 0x80, 0x1f, 0x00, 0x00,
   0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x40, 0x00, 0x30, 0x00,
   0x00, 0x0c, 0x00, 0x02, 0x80, 0x03, 0x00, 0xf8, 0x1f, 0x00, 0xc0, 0x03,
   0x00, 0x1f, 0x00, 0xfe, 0x7f, 0x00, 0xf8, 0x00, 0x00, 0xfe, 0x80, 0xff,
   0xff, 0x01, 0x7f, 0x00, 0x00, 0xfc, 0xc3, 0xff, 0xff, 0xc3, 0x3f, 0x00,
   0x00, 0xf8, 0xe1, 0xff, 0xff, 0x87, 0x1f, 0x00, 0x00, 0xf0, 0xf1, 0xff,
   0xff, 0x0f, 0x0f, 0x00, 0x00, 0xe0, 0xf0, 0xff, 0xff, 0x1f, 0x07, 0x00,
   0x00, 0xc0, 0xf8, 0xff, 0xff, 0x1f, 0x02, 0x00, 0x00, 0x00, 0xfc, 0xff,
   0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff,
   0xff, 0x7f, 0x00, 0x00, 0x00, 0x3c, 0xfe, 0xff, 0xff, 0x7f, 0x3c, 0x00,
   0xc0, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0x03, 0xf8, 0x3f, 0xfe, 0xff,
   0xff, 0x7f, 0xfc, 0x1f, 0xf0, 0x3f, 0xfe, 0xff, 0xff, 0x7f, 0xfc, 0x0f,
   0x00, 0x3e, 0xfe, 0xff, 0xff, 0x7f, 0x7c, 0x00, 0x00, 0x00, 0xfe, 0xff,
   0xff, 0x7f, 0x04, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x7f, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff,
   0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x3f, 0x02, 0x00,
   0x00, 0xe0, 0xf8, 0xff, 0xff, 0x1f, 0x07, 0x00, 0x00, 0xf0, 0xf0, 0xff,
   0xff, 0x0f, 0x0f, 0x00, 0x00, 0xf8, 0xe1, 0xff, 0xff, 0x8f, 0x1f, 0x00,
   0x00, 0xfc, 0xe3, 0xff, 0xff, 0x87, 0x3f, 0x00, 0x00, 0xfe, 0xc3, 0xff,
   0xff, 0xc3, 0x7f, 0x00, 0x00, 0x7f, 0x00, 0xff, 0xff, 0x00, 0xfe, 0x00,
   0x80, 0x07, 0x00, 0xfc, 0x3f, 0x00, 0xe0, 0x01, 0xc0, 0x00, 0x20, 0xe0,
   0x07, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x0e, 0x00, 0x00,
   0x00, 0x00, 0xf0, 0x01, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x01,
   0x80, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xc0, 0x07, 0x1f, 0x00, 0x00,
   0x00, 0x00, 0x78, 0xc0, 0x07, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xc0,
   0x03, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x1c, 0xc0, 0x03, 0x38, 0x00, 0x00,
   0x00, 0x00, 0x1c, 0xc0, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xc0,
   0x03, 0x60, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x01, 0x60, 0x00, 0x00,
   0x00, 0x00, 0x02, 0x80, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
   0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
