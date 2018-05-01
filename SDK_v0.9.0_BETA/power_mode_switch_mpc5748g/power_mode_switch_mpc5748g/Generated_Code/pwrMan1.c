/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : pwrMan1.c
**     Project     : power_mode_switch_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : power_manager
**     Version     : Component SDK_MPC574x_04, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_MPC574x_04
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-01, 00:21, # CodeGen: 0
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc.
**     Copyright 2016-2017 NXP
**     All Rights Reserved.
**
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file pwrMan1.c
** @version 01.00
*/
/*!
**  @addtogroup pwrMan1_module pwrMan1 module documentation
**  @{
*/
/* pwrMan1. */

/* MODULE pwrMan1.
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made
 * static. The external variables will be used in other source files that user
 * initialize to use this module.
 */
#include "pwrMan1.h"
#include <stdbool.h>

/* *************************************************************************
 * Configuration structure for Power Manager Configuration 0
 * ************************************************************************* */
/*! @brief User Configuration structure power_managerCfg_0 */
power_manager_user_config_t pwrMan1_InitConfig0 = {
    .powerMode = POWER_MANAGER_SAFE,   /*!< Power manager mode */
    .powerLevel = MC_ME_PWRLVL_0,      /*!< Relative power level indicator */
    .flashMode = MC_ME_FLASH_RUN_MODE, /*!< Flash power-down control */
    .outputPowerdown = true,           /*!< Output power-down control */
    .mainVoltage = true                /*!< Main voltage regulator control */
};
/* *************************************************************************
 * Configuration structure for Power Manager Configuration 1
 * ************************************************************************* */
/*! @brief User Configuration structure power_managerCfg_1 */
power_manager_user_config_t pwrMan1_InitConfig1 = {
    .powerMode = POWER_MANAGER_DRUN,   /*!< Power manager mode */
    .powerLevel = MC_ME_PWRLVL_0,      /*!< Relative power level indicator */
    .flashMode = MC_ME_FLASH_RUN_MODE, /*!< Flash power-down control */
    .outputPowerdown = false,          /*!< Output power-down control */
    .mainVoltage = true                /*!< Main voltage regulator control */
};
/* *************************************************************************
 * Configuration structure for Power Manager Configuration 2
 * ************************************************************************* */
/*! @brief User Configuration structure power_managerCfg_2 */
power_manager_user_config_t pwrMan1_InitConfig2 = {
    .powerMode = POWER_MANAGER_RUN0,   /*!< Power manager mode */
    .powerLevel = MC_ME_PWRLVL_0,      /*!< Relative power level indicator */
    .flashMode = MC_ME_FLASH_RUN_MODE, /*!< Flash power-down control */
    .outputPowerdown = false,          /*!< Output power-down control */
    .mainVoltage = true                /*!< Main voltage regulator control */
};
/* *************************************************************************
 * Configuration structure for Power Manager Configuration 3
 * ************************************************************************* */
/*! @brief User Configuration structure power_managerCfg_3 */
power_manager_user_config_t pwrMan1_InitConfig3 = {
    .powerMode = POWER_MANAGER_RUN1,   /*!< Power manager mode */
    .powerLevel = MC_ME_PWRLVL_0,      /*!< Relative power level indicator */
    .flashMode = MC_ME_FLASH_RUN_MODE, /*!< Flash power-down control */
    .outputPowerdown = false,          /*!< Output power-down control */
    .mainVoltage = true                /*!< Main voltage regulator control */
};
/* *************************************************************************
 * Configuration structure for Power Manager Configuration 4
 * ************************************************************************* */
/*! @brief User Configuration structure power_managerCfg_4 */
power_manager_user_config_t pwrMan1_InitConfig4 = {
    .powerMode = POWER_MANAGER_RUN2,   /*!< Power manager mode */
    .powerLevel = MC_ME_PWRLVL_0,      /*!< Relative power level indicator */
    .flashMode = MC_ME_FLASH_RUN_MODE, /*!< Flash power-down control */
    .outputPowerdown = false,          /*!< Output power-down control */
    .mainVoltage = true                /*!< Main voltage regulator control */
};
/* *************************************************************************
 * Configuration structure for Power Manager Configuration 5
 * ************************************************************************* */
/*! @brief User Configuration structure power_managerCfg_5 */
power_manager_user_config_t pwrMan1_InitConfig5 = {
    .powerMode = POWER_MANAGER_RUN3,   /*!< Power manager mode */
    .powerLevel = MC_ME_PWRLVL_0,      /*!< Relative power level indicator */
    .flashMode = MC_ME_FLASH_RUN_MODE, /*!< Flash power-down control */
    .outputPowerdown = false,          /*!< Output power-down control */
    .mainVoltage = true                /*!< Main voltage regulator control */
};
/* *************************************************************************
 * Configuration structure for Power Manager Configuration 6
 * ************************************************************************* */
/*! @brief User Configuration structure power_managerCfg_6 */
power_manager_user_config_t pwrMan1_InitConfig6 = {
    .powerMode = POWER_MANAGER_STOP0, /*!< Power manager mode */
    .powerLevel = MC_ME_PWRLVL_0,     /*!< Relative power level indicator */
    .flashMode = MC_ME_FLASH_POWER_DOWN_MODE, /*!< Flash power-down control */
    .outputPowerdown = false,                 /*!< Output power-down control */
    .mainVoltage = true /*!< Main voltage regulator control */
};
/* *************************************************************************
 * Configuration structure for Power Manager Configuration 7
 * ************************************************************************* */
/*! @brief User Configuration structure power_managerCfg_7 */
power_manager_user_config_t pwrMan1_InitConfig7 = {
    .powerMode = POWER_MANAGER_STANDBY0, /*!< Power manager mode */
    .powerLevel = MC_ME_PWRLVL_0,        /*!< Relative power level indicator */
    .flashMode = MC_ME_FLASH_POWER_DOWN_MODE, /*!< Flash power-down control */
    .outputPowerdown = true,                  /*!< Output power-down control */
    .mainVoltage = false /*!< Main voltage regulator control */
};

/*! @brief Array of pointers to User configuration structures */
power_manager_user_config_t *powerConfigsArr[] = {
    &pwrMan1_InitConfig0, &pwrMan1_InitConfig1, &pwrMan1_InitConfig2,
    &pwrMan1_InitConfig3, &pwrMan1_InitConfig4, &pwrMan1_InitConfig5,
    &pwrMan1_InitConfig6, &pwrMan1_InitConfig7};
/*! @brief Array of pointers to User defined Callbacks configuration structures
 */

power_manager_callback_user_config_t *powerStaticCallbacksConfigsArr[] = {
    (void *)0};

/* END pwrMan1. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the NXP C55 series of microcontrollers.
**
** ###################################################################
*/