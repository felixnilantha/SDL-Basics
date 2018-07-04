################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Particle.cpp \
../src/SDL-Basics.cpp \
../src/Screen.cpp \
../src/Swam.cpp 

OBJS += \
./src/Particle.o \
./src/SDL-Basics.o \
./src/Screen.o \
./src/Swam.o 

CPP_DEPS += \
./src/Particle.d \
./src/SDL-Basics.d \
./src/Screen.d \
./src/Swam.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/opt/local/include/SDL2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


