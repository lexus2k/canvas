#include "canvas/canvas.h"

NanoCanvas<64,64,8> canvas;

void setup()
{
    canvas.clear();
    canvas.drawLine(10,10,30,23);
}

void loop()
{
}
