//
// Created by 104 on 2024/12/2.
//

#include "common_inc.h"
#include "random_flash_interface.h"
#include "configurations.h"

BoardConfig_t boardConfig;

void Main()
{
    EEPROM eeprom;
    eeprom.get(0,boardConfig);
    if(boardConfig.configStatus != CONFIG_OK)// use default settings
    {
        boardConfig = BoardConfig_t{
            .configStatus = CONFIG_OK,
            .nodeId = 12,// 7bit address, has to be even number
            .initPos = 90,
            .toqueLimit = 0.5,
            .velocityLimit = 0,
            .adcValAtAngleMin = 250,
            .adcValAtAngleMax = 3000,
            .mechanicalAngleMin = 0,
            .mechanicalAngleMax = 180,
            .dceKp = 10,
            .dceKv = 0,
            .dceKi = 0,
            .dceKd = 50,
            .enableMotorOnBoot = false
        };
        eeprom.put(0,boardConfig);
    }

}
