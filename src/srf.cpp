#include "servo.h"
#include "Arduino.h"
#include "main.h"
#include "srf.h"
const int TRIG_PIN_0 = 12;
const int ECHO_PIN_0 = 13;

const int TRIG_PIN_1 = 8;
const int ECHO_PIN_1 = 9;

const int TRIG_PIN_2 = 4;
const int ECHO_PIN_2 = 5;

const int TRIG_PIN_3 = 21;
const int ECHO_PIN_3 = 20;

const int TRIG_PIN_4 = 33;
const int ECHO_PIN_4 = 32;

const int TRIG_PIN_5 = 37;
const int ECHO_PIN_5 = 36;

const int TRIG_PIN_6 = 41;
const int ECHO_PIN_6 = 40;

const int TRIG_PIN_7 = 45;
const int ECHO_PIN_7 = 44;

const int TRIG_PIN_8 = 17;
const int ECHO_PIN_8 = 16;

int buzzer = 6;
void setup()
{
    // initialize serial communication:
    Serial.begin(9600);
    pinMode(TRIG_PIN_0, OUTPUT);
    pinMode(ECHO_PIN_0, INPUT);

    pinMode(TRIG_PIN_1, OUTPUT);
    pinMode(ECHO_PIN_1, INPUT);

    pinMode(TRIG_PIN_2, OUTPUT);
    pinMode(ECHO_PIN_2, INPUT);

    pinMode(TRIG_PIN_3, OUTPUT);
    pinMode(ECHO_PIN_3, INPUT);

    pinMode(TRIG_PIN_4, OUTPUT);
    pinMode(ECHO_PIN_4, INPUT);

    pinMode(TRIG_PIN_5, OUTPUT);
    pinMode(ECHO_PIN_5, INPUT);

    pinMode(TRIG_PIN_6, OUTPUT);
    pinMode(ECHO_PIN_6, INPUT);

    pinMode(TRIG_PIN_7, OUTPUT);
    pinMode(ECHO_PIN_7, INPUT);

    pinMode(TRIG_PIN_8, OUTPUT);
    pinMode(ECHO_PIN_8, INPUT);

    pinMode(buzzer, OUTPUT);
}
void loop()
{

    sensor_0();
    sensor_1();
    sensor_2();
    sensor_3();
    sensor_4();
    sensor_5();
    sensor_6();
    sensor_7();
    sensor_8();
}

void sensor_0()
{
    long duration_0, distanceCm_0, distanceIn_0;
    digitalWrite(TRIG_PIN_0, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN_0, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN_0, LOW);
    duration_0 = pulseIn(ECHO_PIN_0, HIGH);

    // convert the time into a distance
    distanceCm_0 = duration_0 / 29.1 / 2;
    distanceIn_0 = duration_0 / 74 / 2;

    if (distanceCm_0 <= 0)
    {
        Serial.println("Out of range");
    }
    else if (distanceCm_0 <= 5)
    {
        Serial.println("Maju");
        digitalWrite(buzzer, HIGH);
    }
    else
    {
        Serial.print("Pertama ");
        Serial.print(distanceIn_0);
        Serial.print("in: ");
        Serial.print(distanceCm_0);
        Serial.print("cm");
        Serial.println();
        digitalWrite(buzzer, LOW);
    }
}

void sensor_1()
{
    long duration_1, distanceCm_1, distanceIn_1;
    digitalWrite(TRIG_PIN_1, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN_1, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN_1, LOW);
    duration_1 = pulseIn(ECHO_PIN_1, HIGH);

    // convert the time into a distance
    distanceCm_1 = duration_1 / 29.1 / 2;
    distanceIn_1 = duration_1 / 74 / 2;

    if (distanceCm_1 <= 0)
    {
        Serial.println("Out of range");
    }
    else
    {
        Serial.print("Kedua ");
        Serial.print(distanceIn_1);
        Serial.print("in: ");
        Serial.print(distanceCm_1);
        Serial.print("cm");
        Serial.println();
    }
}

void sensor_2()
{
    long duration_2, distanceCm_2, distanceIn_2;
    digitalWrite(TRIG_PIN_2, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN_2, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN_2, LOW);
    duration_2 = pulseIn(ECHO_PIN_2, HIGH);

    // convert the time into a distance
    distanceCm_2 = duration_2 / 29.1 / 2;
    distanceIn_2 = duration_2 / 74 / 2;

    if (distanceCm_2 <= 0)
    {
        Serial.println("Out of range");
    }
    else
    {
        Serial.print("Ketiga ");
        Serial.print(distanceIn_2);
        Serial.print("in: ");
        Serial.print(distanceCm_2);
        Serial.print("cm");
        Serial.println();
    }
}

void sensor_3()
{
    long duration_3, distanceCm_3, distanceIn_3;
    digitalWrite(TRIG_PIN_3, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN_3, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN_3, LOW);
    duration_3 = pulseIn(ECHO_PIN_3, HIGH);

    // convert the time into a distance
    distanceCm_3 = duration_3 / 29.1 / 2;
    distanceIn_3 = duration_3 / 74 / 2;

    if (distanceCm_3 <= 0)
    {
        Serial.println("Out of range");
    }
    else
    {
        Serial.print("Keempat ");
        Serial.print(distanceIn_3);
        Serial.print("in: ");
        Serial.print(distanceCm_3);
        Serial.print("cm");
        Serial.println();
    }
}

void sensor_4()
{
    long duration_4, distanceCm_4, distanceIn_4;
    digitalWrite(TRIG_PIN_4, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN_4, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN_4, LOW);
    duration_4 = pulseIn(ECHO_PIN_4, HIGH);

    // convert the time into a distance
    distanceCm_4 = duration_4 / 29.1 / 2;
    distanceIn_4 = duration_4 / 74 / 2;

    if (distanceCm_4 <= 0)
    {
        Serial.println("Out of range");
    }
    else
    {
        Serial.print("Kelima ");
        Serial.print(distanceIn_4);
        Serial.print("in: ");
        Serial.print(distanceCm_4);
        Serial.print("cm");
        Serial.println();
    }
}

void sensor_5()
{
    long duration_5, distanceCm_5, distanceIn_5;
    digitalWrite(TRIG_PIN_5, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN_5, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN_5, LOW);
    duration_5 = pulseIn(ECHO_PIN_5, HIGH);

    // convert the time into a distance
    distanceCm_5 = duration_5 / 29.1 / 2;
    distanceIn_5 = duration_5 / 74 / 2;

    if (distanceCm_5 <= 0)
    {
        Serial.println("Out of range");
    }
    else
    {
        Serial.print("Keenam ");
        Serial.print(distanceIn_5);
        Serial.print("in: ");
        Serial.print(distanceCm_5);
        Serial.print("cm");
        Serial.println();
    }
}

void sensor_6()
{
    long duration_6, distanceCm_6, distanceIn_6;
    digitalWrite(TRIG_PIN_6, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN_6, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN_6, LOW);
    duration_6 = pulseIn(ECHO_PIN_6, HIGH);

    // convert the time into a distance
    distanceCm_6 = duration_6 / 29.1 / 2;
    distanceIn_6 = duration_6 / 74 / 2;

    if (distanceCm_6 <= 0)
    {
        Serial.println("Out of range");
    }
    else
    {
        Serial.print("Ketujuh ");
        Serial.print(distanceIn_6);
        Serial.print("in: ");
        Serial.print(distanceCm_6);
        Serial.print("cm");
        Serial.println();
    }
}

void sensor_7()
{
    long duration_7, distanceCm_7, distanceIn_7;

    digitalWrite(TRIG_PIN_7, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN_7, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN_7, LOW);
    duration_7 = pulseIn(ECHO_PIN_7, HIGH);

    // convert the time into a distance
    distanceCm_7 = duration_7 / 29.1 / 2;
    distanceIn_7 = duration_7 / 74 / 2;

    if (distanceCm_7 <= 0)
    {
        Serial.println("Out of range");
    }
    else
    {
        Serial.print("Kedelapan ");
        Serial.print(distanceIn_7);
        Serial.print("in: ");
        Serial.print(distanceCm_7);
        Serial.print("cm");
        Serial.println();
    }
}

void sensor_8()
{
    long duration_8, distanceCm_8, distanceIn_8;

    digitalWrite(TRIG_PIN_8, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN_8, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN_8, LOW);
    duration_8 = pulseIn(ECHO_PIN_8, HIGH);

    // convert the time into a distance
    distanceCm_8 = duration_8 / 29.1 / 2;
    distanceIn_8 = duration_8 / 74 / 2;

    if (distanceCm_8 <= 0)
    {
        Serial.println("Out of range");
    }
    else
    {
        Serial.print("Kesembilan ");
        Serial.print(distanceIn_8);
        Serial.print("in: ");
        Serial.print(distanceCm_8);
        Serial.print("cm");
        Serial.println();
    }
    delay(100);
}