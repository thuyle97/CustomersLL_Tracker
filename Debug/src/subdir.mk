################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CS20_LinkedList_Customers.cpp \
../src/Customer.cpp \
../src/LinkedList.cpp \
../src/Stack.cpp 

OBJS += \
./src/CS20_LinkedList_Customers.o \
./src/Customer.o \
./src/LinkedList.o \
./src/Stack.o 

CPP_DEPS += \
./src/CS20_LinkedList_Customers.d \
./src/Customer.d \
./src/LinkedList.d \
./src/Stack.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


