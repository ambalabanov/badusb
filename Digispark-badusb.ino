#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(5000);
}


void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_F2, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("gnome-terminal");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("echo 'Hello Alt+F2'");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("gnome-terminal");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("echo 'Hello Super+A'");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
}