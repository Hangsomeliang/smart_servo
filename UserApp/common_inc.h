//
// Created by 104 on 2024/12/2.
//
#ifndef COMMON_INC_H
#define COMMON_INC_H

/*---------------------------- C Scope ---------------------------*/
#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#include "adc.h"
#include "i2c.h"
#include "tim.h"


void Main();

#ifdef __cplusplus
}

/*---------------------------- C++ Scope ---------------------------*/

#include "motor.h"

#endif
#endif
