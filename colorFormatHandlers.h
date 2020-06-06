#pragma once

#include "types.h"

void colorFormatHandlerL1BE       (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerL1LE       (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerL2BE       (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerL2LE       (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerL4BE       (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerL4LE       (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerL8         (struct rgba8888_t* dst, uint8_t const* src, int numBytes);

void colorFormatHandlerRGB565BE   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerRGB565LE   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerBGR565BE   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerBGR565LE   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);

void colorFormatHandlerARGB4444BE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerARGB4444LE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);

void colorFormatHandlerARGB1555BE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerARGB1555LE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerABGR1555BE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerABGR1555LE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);

void colorFormatHandlerXRGB1555BE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerXRGB1555LE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerXBGR1555BE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerXBGR1555LE (struct rgba8888_t* dst, uint8_t const* src, int numBytes);

void colorFormatHandlerRGB888     (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerBGR888     (struct rgba8888_t* dst, uint8_t const* src, int numBytes);

void colorFormatHandlerARGB8888   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerABGR8888   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerRGBA8888   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerBGRA8888   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);

void colorFormatHandlerXRGB8888   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerXBGR8888   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerRGBX8888   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
void colorFormatHandlerBGRX8888   (struct rgba8888_t* dst, uint8_t const* src, int numBytes);
