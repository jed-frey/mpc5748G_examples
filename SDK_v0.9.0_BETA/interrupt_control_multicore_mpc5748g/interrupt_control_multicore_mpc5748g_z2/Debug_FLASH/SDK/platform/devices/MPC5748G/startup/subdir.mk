################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"/opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/platform/devices/MPC5748G/startup/system_MPC5748G.c" 

C_SRCS += \
/opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/platform/devices/MPC5748G/startup/system_MPC5748G.c 

OBJS_OS_FORMAT += \
./SDK/platform/devices/MPC5748G/startup/system_MPC5748G.o 

C_DEPS_QUOTED += \
"./SDK/platform/devices/MPC5748G/startup/system_MPC5748G.d" 

OBJS += \
./SDK/platform/devices/MPC5748G/startup/system_MPC5748G.o 

OBJS_QUOTED += \
"./SDK/platform/devices/MPC5748G/startup/system_MPC5748G.o" 

C_DEPS += \
./SDK/platform/devices/MPC5748G/startup/system_MPC5748G.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/devices/MPC5748G/startup/system_MPC5748G.o: /opt/NXP/S32DS_Power_v2017.R1/S32DS/S32_SDK_MPC574xx_BETA_0.9.0/platform/devices/MPC5748G/startup/system_MPC5748G.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@SDK/platform/devices/MPC5748G/startup/system_MPC5748G.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "SDK/platform/devices/MPC5748G/startup/system_MPC5748G.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

