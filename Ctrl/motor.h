//
// Created by 104 on 2024/12/3.
//

#ifndef MOTOR_H
#define MOTOR_H

#include <cstdint>

class Motor
{
public:
    Motor()
    {}

    const float DCE_INTEGRAL_LIMIT = 500;

    struct DCE_t
    {
        float kp;
        float kv;
        float ki;
        float kd;
        float setPointPos;
        float setPointVel;
        float integralPos;
        float integralVel;
        float lastError;
        float output;
    }dce;

    uint16_t adcValAtAngleMin;
    uint16_t adcValAtAngleMax;
    float angle;
    float velocity;
    float mechanicalAngleMin;
    float mechanicalAngleMax;

    void UpdateVelocity();
    void SetEnable(bool _enable);
    void SetTorqueLimit(float _percent);
    float CalcDceOutput(float _inputPos,float _inputVel);
    void SetPwm(uint16_t _pwm);

private:
    bool isEnabled;
    float lastAngle;
    float limitAngleMin;
    float limitAngleMax;
    float limitVelocity;
    float limitTorque;
};

#endif //MOTOR_H
