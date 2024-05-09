#include "Keyboard.h"
#include "Mouse.h"

void openNotepad() {
  Keyboard.write(131); // (Windows)
  delay(1000);
  Keyboard.write(110); // n
  Keyboard.write(111); // o
  Keyboard.write(116); // t
  Keyboard.write(144); // e
  Keyboard.write(155); // p
  Keyboard.write(156); // a
  Keyboard.write(143); // d
  delay(1000);
  Keyboard.write(176);  // \n
}

void openCroissantage() {
  Keyboard.press(131); // (Windows)
  Keyboard.write(114);  // r
  Keyboard.release(131);

  delay(500);

  Keyboard.write(104);    // h
  Keyboard.write(116);    // t
  Keyboard.write(116);    // t
  Keyboard.write(112);    // p
  Keyboard.write(115);    // s
  Keyboard.write(46);     // :
  Keyboard.write(62);     // /
  Keyboard.write(62);     // /
  Keyboard.write(99);     // c
  Keyboard.write(114);    // r
  Keyboard.write(111);    // o
  Keyboard.write(105);    // i
  Keyboard.write(115);    // s
  Keyboard.write(115);    // s
  Keyboard.write(113);    // a
  Keyboard.write(110);    // n
  Keyboard.write(116);    // t
  Keyboard.write(113);    // a
  Keyboard.write(103);    // g
  Keyboard.write(101);    // e
  Keyboard.write(60);     // .
  Keyboard.write(102);    // f
  Keyboard.write(114);    // r
  Keyboard.write(176);    // \n

  delay(500);
  Keyboard.write(204);
}

void setup() {
  Keyboard.begin();
  //Mouse.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);
}

char brightness = 0;
char inc = 1;
char fait = 0;

void loop() {
  // set the brightness of pin 9:
  analogWrite(LED_BUILTIN, brightness);

  // change the brightness for next time through the loop:
  brightness += inc;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness == 0 || brightness == 255) {
    inc = -inc;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(10);

  if (!fait) {
    openCroissantage();
    fait = !fait;
  }
  if (BOOTSEL) {
    openNotepad();
  }
}
