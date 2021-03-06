# Canvas graphics library for small embedded systems

[tocstart]: # (toc start)

  * [Introduction](#introduction)
  * [Key Features](#key-features)
  * [Why canvas library](#why-canvas-library)
  * [Setting up](#setting-up)
  * [License](#license)

[tocend]: # (toc end)

## Introduction

Small canvas graphics library for small embedded systems

## Key Features

 * Supports
   * monochrome color buffers
   * RGB 332 color buffers
   * RGB 565 color buffers
 * Small flash footprint
 * Easy to use
   * Used in [ssd1306](https://github.com/lexus2k/lcdgfx) library

Example:

```.cpp
// Create 8-bit RGB (3-3-2) canvas 64x64 pixels
NanoCanvas<64,64,8> canvas;
canvas.clear();
canvas.drawLine(10,10,30,23);
// To get width, height, and access the bitmap data use methods below
// canvas.width(), canvas.height(), canvas.getData()
// If you need to know, how many bytes in single canvas row, use
// canvas.pitch() method.
```

## Why canvas library

The main idea is to have small flash footprint. The [test](examples/test/test.ino) demo example
can be compiled either with Adafruit GFX support or canvas GFX support. Just only having Adafruit
GFX 8-bit buffer defined in your application requires 6KiB of flash (for AVR), while the same
code with canvas gfx library uses less than 1KiB of flash.

## Setting up

*Setting up for Arduino from github sources)*
 * Download source from https://github.com/lexus2k/canvas
 * Put the sources to Arduino/libraries/canvas/ folder

*Using with plain avr-gcc:*
 * Download source from https://github.com/lexus2k/canvas
 * Build the library (variant 1)
   > cd canvas/src && make -f Makefile.avr MCU=your_mcu

   * Link library to your project (refer to [Makefile.avr](examples/Makefile.avr) in examples folder).
 * Build demo code (variant 2)
   > cd canvas/tools && ./build_and_run.sh -p avr -m `your_mcu` test/test

 *For esp32:*
  * Download source from https://github.com/lexus2k/canvas
  * Put downloaded sources to components/canvas/ folder.
  * Compile your project as described in ESP-IDF build system documentation

For more information about this library, please, visit https://github.com/lexus2k/canvas or
refer to [Documentation](http://lexus2k.github.io/canvas).
If you found any problem or have any idea, please, report to Issues section.

## License

The library is free. If this project helps you, you can give me a cup of coffee.

MIT License

Copyright (c) 2016-2019, Alexey Dynda

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


