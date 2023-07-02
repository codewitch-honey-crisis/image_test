#include <Arduino.h>
#include <ui.hpp>

using namespace gfx;
void setup() {
  Serial.begin(115200);
  main_screen_init();

}

void loop() {
  main_screen.update();
}
