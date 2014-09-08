// Copyright (c) 2014 Eugene Zhuk.
// Use of this source code is governed by the MIT license that can be found
// in the LICENSE file.

#include <microview.h>


void setup() {
  uView.begin();
  uView.clear(ALL);
  uView.display();
  delay(500);
  uView.clear(PAGE);
}

void loop() {
  fill(WHITE);
  delay(1000);

  fill(BALCK);
  delay(1000);

  uView.print("HelloWorld")
  uView.display();
  delay(1000);
}

void fill(uint8_t color) {
  uView.rectFill(0, 0, LCDWIDTH, LCDHEIGHT, color, NORM);
  uView.display();
}

