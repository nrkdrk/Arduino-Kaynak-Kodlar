//Berk Can | www.nrkdrk.com
#include <Keypad.h>
const byte line = 4;
const byte column = 4;

// satır ve sutun pinlerini ben 13 ile 6 arasındaki pinler olarak belirledim
//sizler bu pinleri istediğiniz pinler olarak değiştirebilirsiniz
byte line_pins[line] = {13, 12, 11, 10};
byte column_pins[line] = {9, 8, 7, 6};

char Button;
char keyboard[line][column] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

Keypad KeyPad = Keypad(makeKeymap(keyboard) , line_pins , column_pins , line , column);

void setup(){
  Serial.begin(9600);
}

void loop(){
  Button = KeyPad.getKey();
  if (Button){
    Serial.println(Button);
  }

}
