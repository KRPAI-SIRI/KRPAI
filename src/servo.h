#ifndef SERVO_H
#define SERVO_H

class servo{


public:

    void Leg_FL(int top, int mid, int bot);
    void Leg_FR(int top, int mid, int bot);
    void Leg_BL(int top, int mid, int bot);
    void Leg_BR(int top, int mid, int bot);

    int pulseWidth(int angle);

    void steady();
    void maju();

    void setup();
};

#endif