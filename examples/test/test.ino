//#define TEST_ADAFRUIT

#ifndef TEST_ADAFRUIT

#include "canvas_gfx.h"

NanoCanvas<48,24,8> canvas;

void setup()
{
    canvas.clear();
    canvas.drawLine(10,10,30,23);
}

void loop()
{
}

#else

#include "Adafruit_GFX.h"

GFXcanvas8 canvas(48,24);

void setup()
{
    canvas.fillScreen(0);
    canvas.drawLine(10,10,30,23,0xFF);
}

void loop()
{
}

#endif
