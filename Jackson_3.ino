#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Fixed by RoboCode
LiquidCrystal_I2C lcd_27(0x27, 16, 2);
int i = 0;

void yelow();
void red();
void brig();
void green();
void police();
void blue();
void violet();

void setup()
{
  lcd_27.begin ();
  lcd_27.backlight();
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  lcd_27.setCursor(1-1, 1-1);
  lcd_27.print( "gjhghjk" );
  lcd_27.setCursor(1-1, 2-1);
  lcd_27.print( "red" );
  red();
  lcd_27.setCursor(1-1, 2-1);
  lcd_27.print( "green" );
  green();
  lcd_27.clear();
}

void green()
{
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
}

void blue()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(1000);
}

void red()
{
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000);
}

void brig()
{
  if (i < 255)
  {
    i = ( i + 10 );
    analogWrite(11, i);
    delay(100);
    if (i >= 255)
    {
      i = 0;
    }
  }
}

void yelow()
{
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
}

void police()
{
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(500);
}

void violet()
{
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
}
