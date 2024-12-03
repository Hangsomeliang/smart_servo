//
// Created by 104 on 2024/12/3.
//

#ifndef CONFIGURATIONS_H
#define CONFIGURATIONS_H
#include <cstdint>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum configStatus_t
{
    CONFIG_RESTORE = 0,
    CONFIG_OK,
    CONFIG_COMMIT
}configStatus_t;

typedef struct Config_t
{
    configStatus_t configStatus;
    uint8_t nodeId;
    float initPos;
    float toqueLimit;
    float velocityLimit;
    uint16_t adcValAtAngleMin;
    uint16_t adcValAtAngleMax;
    float mechanicalAngleMin;
    float mechanicalAngleMax;
    float dceKp;
    float dceKv;
    float dceKi;
    float dceKd;
    bool enableMotorOnBoot;
}BoardConfig_t;

extern BoardConfig_t boardConfig;

#ifdef __cplusplus
}

#endif

#endif //CONFIGURATIONS_H
