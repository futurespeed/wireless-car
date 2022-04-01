#include "motor_driver.h"
#include "Arduino.h"

void motor_init(void)
{
    pinMode(PIN_MOTOR_A1, OUTPUT);
    pinMode(PIN_MOTOR_A2, OUTPUT);
    pinMode(PIN_MOTOR_B1, OUTPUT);
    pinMode(PIN_MOTOR_B2, OUTPUT);
    motor_move_stop();
}

void motor_move_left(void)
{
    digitalWrite(PIN_MOTOR_A1, HIGH);
    digitalWrite(PIN_MOTOR_A2, LOW);
    digitalWrite(PIN_MOTOR_B1, LOW);
    digitalWrite(PIN_MOTOR_B2, HIGH);
}
void motor_move_right(void)
{
    digitalWrite(PIN_MOTOR_A1, LOW);
    digitalWrite(PIN_MOTOR_A2, HIGH);
    digitalWrite(PIN_MOTOR_B1, HIGH);
    digitalWrite(PIN_MOTOR_B2, LOW);
}
void motor_move_forward(void)
{
    digitalWrite(PIN_MOTOR_A1, HIGH);
    digitalWrite(PIN_MOTOR_A2, LOW);
    digitalWrite(PIN_MOTOR_B1, HIGH);
    digitalWrite(PIN_MOTOR_B2, LOW);
}
void motor_move_backward(void)
{
    digitalWrite(PIN_MOTOR_A1, LOW);
    digitalWrite(PIN_MOTOR_A2, HIGH);
    digitalWrite(PIN_MOTOR_B1, LOW);
    digitalWrite(PIN_MOTOR_B2, HIGH);
}
void motor_move_stop(void)
{
    digitalWrite(PIN_MOTOR_A1, LOW);
    digitalWrite(PIN_MOTOR_A2, LOW);
    digitalWrite(PIN_MOTOR_B1, LOW);
    digitalWrite(PIN_MOTOR_B2, LOW);
}