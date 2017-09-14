#ifndef IMAGES_H
#define IMAGES_H

const uint8_t PROGMEM dinosaur_still[] = {
  18, 24,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFB, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x3F, 0x7C, 0xF8, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x04, 0x0C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x1F, 0x17, 0x03, 0x01, 0x03, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM dinosaur_running_1[] = {
  18, 24,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFB, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x3F, 0x7C, 0xF8, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x04, 0x0C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x0F, 0x0B, 0x01, 0x01, 0x03, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM dinosaur_running_2[] = {
  18, 24,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFB, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x3F, 0x7C, 0xF8, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x04, 0x0C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x1F, 0x17, 0x03, 0x01, 0x03, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM dinosaur_dead[] = {
  18, 24,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xE3, 0xEB, 0xE3, 0xBF, 0xBF, 0x3F, 0x3E,
  0x3F, 0x7C, 0xF8, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x04, 0x0C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x1F, 0x17, 0x03, 0x01, 0x03, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM dinosaur_ducking_1[] = {
  26, 16,
  0x07, 0x0E, 0x1E, 0x3C, 0x7C, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x7C, 0xFE, 0xFF, 0xFB, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x05, 0x01, 0x1F, 0x17, 0x03, 0x01, 0x00, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM dinosaur_ducking_2[] = {
  26, 16,
  0x07, 0x0E, 0x1E, 0x3C, 0x7C, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x7C, 0xFE, 0xFF, 0xFB, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x17, 0x03, 0x01, 0x01, 0x07, 0x05, 0x00, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


const uint8_t PROGMEM dinosaur_still_mask[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x3F, 0x7C, 0xF8, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x04, 0x0C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x1F, 0x17, 0x03, 0x01, 0x03, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM dinosaur_running_1_mask[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x3F, 0x7C, 0xF8, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x04, 0x0C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x0F, 0x0B, 0x01, 0x01, 0x03, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM dinosaur_running_2_mask[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x3F, 0x7C, 0xF8, 0xF0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x04, 0x0C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x1F, 0x17, 0x03, 0x01, 0x03, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM dinosaur_ducking_1_mask[] = {
  0x07, 0x0E, 0x1E, 0x3C, 0x7C, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x7C, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x05, 0x01, 0x1F, 0x17, 0x03, 0x01, 0x00, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM dinosaur_ducking_2_mask[] = {
  0x07, 0x0E, 0x1E, 0x3C, 0x7C, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x7C, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xBF, 0x3F, 0x3E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x17, 0x03, 0x01, 0x01, 0x07, 0x05, 0x00, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM pterodactyl_1[] = {
  22, 16,
  0x20, 0x30, 0x38, 0x3C, 0x3E, 0x3E, 0x78, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x1F, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02, 0x02, 0x00,
};

const uint8_t PROGMEM pterodactyl_2[] = {
  22, 16,
  0x20, 0x30, 0x38, 0x3C, 0x3E, 0x3E, 0x78, 0xE0, 0xFF, 0xFE, 0xF8, 0xF0, 0xE0, 0xE0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02, 0x02, 0x00,
};

const uint8_t PROGMEM cactus_1[] = {
  11, 24,
  0x00, 0x80, 0x00, 0x00, 0xF8, 0xFC, 0xF8, 0x00, 0xE0, 0xF0, 0xE0,
  0x3F, 0x7F, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0x1C, 0x1F, 0x0F, 0x07,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM cactus_2[] = {
  23, 24,
  0x00, 0x80, 0x00, 0x00, 0xF8, 0xFC, 0xF8, 0x00, 0xE0, 0xF0, 0xE0, 0x00, 0xF8, 0xFC, 0xF8, 0x00, 0xFE, 0xFF, 0xFE, 0x00, 0x80, 0xC0, 0x80,
  0x3F, 0x7F, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0x1C, 0x1F, 0x0F, 0x07, 0x00, 0x01, 0x03, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0x70, 0x7F, 0x3F, 0x1F,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM cactus_3[] = {
  35, 24,
  0xF8, 0xFC, 0xF8, 0x00, 0xFE, 0xFF, 0xFE, 0x00, 0x80, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xF8, 0xFC, 0xF8, 0x00, 0xE0, 0xF0, 0xE0,
  0x01, 0x03, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0x70, 0x7F, 0x3F, 0x1F, 0x00, 0xF8, 0xFC, 0xF8, 0x80, 0xFF, 0xFF, 0xFF, 0xC0, 0xFC, 0xFE, 0x7C, 0x00, 0x3F, 0x7F, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0x1C, 0x1F, 0x0F, 0x07,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x3F, 0x3F, 0x3F, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM ground_1[] = {
  32, 8,
  0x14, 0x14, 0x04, 0x04, 0x44, 0x44, 0x44, 0x04, 0x04, 0x04, 0x04, 0x04, 0x24, 0x04, 0x04, 0x04, 0x04, 0x14, 0x14, 0x04, 0x04, 0x04, 0x44, 0x44, 0x04, 0x04, 0x04, 0x04, 0x24, 0x04, 0x04, 0x04,
};

const uint8_t PROGMEM ground_2[] = {
  32, 8,
  0x04, 0x24, 0x24, 0x04, 0x04, 0x04, 0x44, 0x04, 0x04, 0x04, 0x14, 0x04, 0x22, 0x02, 0x01, 0x01, 0x09, 0x81, 0x82, 0x02, 0x04, 0x04, 0x04, 0x14, 0x04, 0x04, 0x04, 0x44, 0x44, 0x04, 0x04, 0x04,
};

const uint8_t PROGMEM ground_3[] = {
  32, 8,
  0x84, 0x84, 0x04, 0x04, 0x04, 0x14, 0x04, 0x14, 0x04, 0x44, 0x04, 0x04, 0x08, 0x08, 0x90, 0x90, 0x10, 0x10, 0x10, 0x08, 0x08, 0x04, 0x44, 0x44, 0x04, 0x04, 0x04, 0x14, 0x04, 0x24, 0x04, 0x04,
};

#endif