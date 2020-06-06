#pragma once

#include "types.h"

void blockFormatHandlerDXT1    (struct rgba8888_t* dst, uint8_t const* src, int dstWidth, int numBytes);
void blockFormatHandlerDXT5    (struct rgba8888_t* dst, uint8_t const* src, int dstWidth, int numBytes);

void blockFormatHandlerGameboy (struct rgba8888_t* dst, uint8_t const* src, int dstWidth, int numBytes);
void blockFormatHandlerNES     (struct rgba8888_t* dst, uint8_t const* src, int dstWidth, int numBytes);
