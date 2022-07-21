#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Fixed by RoboCode
LiquidCrystal_I2C lcd_27(0x27, 16, 2);

void setup()
{
  lcd_27.begin ();
  lcd_27.backlight();
  pinMode(16, INPUT);
  pinMode(30, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(17, INPUT);
  pinMode(27, OUTPUT);
  pinMode(26, OUTPUT);
}

void loop()
{
  lcd_27.setCursor(2-1, 1-1);
  lcd_27.print( "!!!ROBOCODE!!!" );
  lcd_27.setCursor(1-1, 2-1);
  lcd_27.print( "SCHOOL57-FOREVER" );
  if (digitalRead(16))
  {
    digitalWrite(30, HIGH);
    digitalWrite(29, LOW);
    digitalWrite(28, LOW);
  }
  if (digitalRead(17))
  {
    digitalWrite(30, LOW);
    digitalWrite(29, LOW);
    digitalWrite(28, HIGH);
  }
  if (analogRead(7) > 100)
  {
    digitalWrite(30, LOW);
    digitalWrite(29, HIGH);
    digitalWrite(28, LOW);
  }
  if (analogRead(0) < 100)
  {
    digitalWrite(30, LOW);
    digitalWrite(29, LOW);
    digitalWrite(28, LOW);
    delay(200);
    digitalWrite(30, HIGH);
    digitalWrite(29, LOW);
    digitalWrite(28, HIGH);
    delay(200);
  }
  else
  {
    digitalWrite(30, LOW);
    digitalWrite(29, LOW);
    digitalWrite(28, LOW);
  }
  if (analogRead(1) < 100)
  {
    digitalWrite(27, LOW);
    digitalWrite(26, LOW);
    delay(200);
    digitalWrite(27, HIGH);
    digitalWrite(26, HIGH);
    delay(200);
  }
  else
  {
    digitalWrite(27, LOW);
    digitalWrite(26, LOW);
  }
}
