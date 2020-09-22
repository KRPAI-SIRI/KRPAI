#include "servo.h"
#include "Arduino.h"
#include "Wire.h"
#include "Adafruit_PWMServoDriver.h"

Adafruit_PWMServoDriver pwmL;

#define MIN_PULSE_WIDTH 650
#define MAX_PULSE_WIDTH 2350
#define DEFAULT_PULSE_WIDTH 1500
#define FREQUENCY 50

//pin servo
//kaki depan kanan
#define Pin_Leg_FL_top 6
#define Pin_Leg_FL_med 7
#define Pin_Leg_FL_bot 8

// kaki depan kiri
#define Pin_Leg_FR_top 0
#define Pin_Leg_FR_med 1
#define Pin_Leg_FR_bot 2

// kaki belakang kanan
#define Pin_Leg_BL_top 9
#define Pin_Leg_BL_med 10

#define Pin_Leg_BL_bot 11

// kaki belakang kiri
#define Pin_Leg_BR_top 3
#define Pin_Leg_BR_med 4
#define Pin_Leg_BR_bot 5

// our servo # counter
uint8_t servonum = 0;

void servo::setup()
{
  pwmL = Adafruit_PWMServoDriver();
  pwmL.begin();
  pwmL.setPWMFreq(FREQUENCY);
}

void servo::Leg_FR(int top, int mid, int bot)
{
  pwmL.setPWM(Pin_Leg_FR_top, 0, pulseWidth(top));
  pwmL.setPWM(Pin_Leg_FR_med, 0, pulseWidth(mid));
  pwmL.setPWM(Pin_Leg_FR_bot, 0, pulseWidth(bot));
}

//kaki belakang kanan
void servo::Leg_BR(int top, int mid, int bot)
{
  pwmL.setPWM(Pin_Leg_BR_top, 0, pulseWidth(top));
  pwmL.setPWM(Pin_Leg_BR_med, 0, pulseWidth(mid));
  pwmL.setPWM(Pin_Leg_BR_bot, 0, pulseWidth(bot));
}

//kaki dpan kiri
void servo::Leg_FL(int top, int mid, int bot)
{
  pwmL.setPWM(Pin_Leg_FL_top, 0, pulseWidth(top));
  pwmL.setPWM(Pin_Leg_FL_med, 0, pulseWidth(mid));
  pwmL.setPWM(Pin_Leg_FL_bot, 0, pulseWidth(bot));
}

//kaki belakang kiri
void servo::Leg_BL(int top, int mid, int bot)
{
  pwmL.setPWM(Pin_Leg_BL_top, 0, pulseWidth(top));
  pwmL.setPWM(Pin_Leg_BL_med, 0, pulseWidth(mid));
  pwmL.setPWM(Pin_Leg_BL_bot, 0, pulseWidth(bot));
}

// derajat servo
int servo::pulseWidth(int angle)
{
  int pulse_wide, analog_value;
  pulse_wide = map(angle, 0, 180, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  analog_value = int(float(pulse_wide) / 1000000 * FREQUENCY * 4096);
  Serial.println(analog_value);
  return analog_value;
}

void servo::steady()
{
  Leg_FR(90, 90, 90);
  Leg_FL(90, 90, 90);
  Leg_BR(90, 90, 90);
  Leg_BL(90, 90, 90);
}

void servo::maju()
{
  //Back Left ngurang, nambah, ngurang
  //Back Right nambah, ngurang, nambah
  //FR nambah, nambah, nambah
  //FL ngurang, ngurang, ngurang

  Leg_BR(90, 135, 90);
  delay(100);
  Leg_BR(135, 135, 90);
  delay(100);
  Leg_BR(135, 90, 90);
  delay(100);

  Leg_FR(90, 135, 90);
  delay(100);
  Leg_FR(135, 135, 90);
  delay(100);
  Leg_FR(135, 90, 90);
  delay(100);

  //langkah 2

  Leg_BL(90, 45, 90);
  delay(100);
  Leg_BL(45, 45, 90);
  delay(100);
  Leg_BL(45, 90, 90);
  delay(100);

  Leg_FL(90, 45, 90);
  delay(100);
  Leg_FL(45, 45, 90);
  delay(100);
  Leg_FL(45, 90, 90);
  delay(100);

  //ngangsrod
  Leg_FL(90, 90, 90);
  Leg_BR(90, 90, 90);
  Leg_FR(90, 90, 90);
  Leg_BL(90, 90, 90);
  delay(100);
}
