################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../arduino/ \
../arduino/cores/ \
../arduino/cores/arduino/ \
../arduino/variants/ \
../fallback \
../build


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../Actuator.cpp \
../ActuatorArduinoPin.cpp \
../ArduinoFunctions.cpp \
../Brewpi.cpp \
../BrewpiStrings.cpp \
../Buzzer.cpp \
../DallasTemperature.cpp \
../DeviceManager.cpp \
../Display.cpp \
../DisplayLcd.cpp \
../DS2413.cpp \
../EepromManager.cpp \
../FilterCascaded.cpp \
../FilterFixed.cpp \
../Logger.cpp \
../Main.cpp \
../Menu.cpp \
../NullLcdDriver.cpp \
../OLEDFourBit.cpp \
../OneWire.cpp \
../OneWireTempSensor.cpp \
../PiLink.cpp \
../Random.cpp \
../RotaryEncoder.cpp \
../Sensor.cpp \
../SettingsManager.cpp \
../Simulator.cpp \
../SpiLcd.cpp \
../TempControl.cpp \
../TemperatureFormats.cpp \
../TempSensor.cpp \
../Ticks.cpp


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
Actuator.o \
ActuatorArduinoPin.o \
ArduinoFunctions.o \
Brewpi.o \
BrewpiStrings.o \
Buzzer.o \
DallasTemperature.o \
DeviceManager.o \
Display.o \
DisplayLcd.o \
DS2413.o \
EepromManager.o \
FilterCascaded.o \
FilterFixed.o \
Logger.o \
Main.o \
Menu.o \
NullLcdDriver.o \
OLEDFourBit.o \
OneWire.o \
OneWireTempSensor.o \
PiLink.o \
Random.o \
RotaryEncoder.o \
Sensor.o \
SettingsManager.o \
Simulator.o \
SpiLcd.o \
TempControl.o \
TemperatureFormats.o \
TempSensor.o \
Ticks.o

OBJS_AS_ARGS +=  \
Actuator.o \
ActuatorArduinoPin.o \
ArduinoFunctions.o \
Brewpi.o \
BrewpiStrings.o \
Buzzer.o \
DallasTemperature.o \
DeviceManager.o \
Display.o \
DisplayLcd.o \
DS2413.o \
EepromManager.o \
FilterCascaded.o \
FilterFixed.o \
Logger.o \
Main.o \
Menu.o \
NullLcdDriver.o \
OLEDFourBit.o \
OneWire.o \
OneWireTempSensor.o \
PiLink.o \
Random.o \
RotaryEncoder.o \
Sensor.o \
SettingsManager.o \
Simulator.o \
SpiLcd.o \
TempControl.o \
TemperatureFormats.o \
TempSensor.o \
Ticks.o

C_DEPS +=  \
Actuator.d \
ActuatorArduinoPin.d \
ArduinoFunctions.d \
Brewpi.d \
BrewpiStrings.d \
Buzzer.d \
DallasTemperature.d \
DeviceManager.d \
Display.d \
DisplayLcd.d \
DS2413.d \
EepromManager.d \
FilterCascaded.d \
FilterFixed.d \
Logger.d \
Main.d \
Menu.d \
NullLcdDriver.d \
OLEDFourBit.d \
OneWire.d \
OneWireTempSensor.d \
PiLink.d \
Random.d \
RotaryEncoder.d \
Sensor.d \
SettingsManager.d \
Simulator.d \
SpiLcd.d \
TempControl.d \
TemperatureFormats.d \
TempSensor.d \
Ticks.d

C_DEPS_AS_ARGS +=  \
Actuator.d \
ActuatorArduinoPin.d \
ArduinoFunctions.d \
Brewpi.d \
BrewpiStrings.d \
Buzzer.d \
DallasTemperature.d \
DeviceManager.d \
Display.d \
DisplayLcd.d \
DS2413.d \
EepromManager.d \
FilterCascaded.d \
FilterFixed.d \
Logger.d \
Main.d \
Menu.d \
NullLcdDriver.d \
OLEDFourBit.d \
OneWire.d \
OneWireTempSensor.d \
PiLink.d \
Random.d \
RotaryEncoder.d \
Sensor.d \
SettingsManager.d \
Simulator.d \
SpiLcd.d \
TempControl.d \
TemperatureFormats.d \
TempSensor.d \
Ticks.d

OUTPUT_FILE_PATH +=brewpi_avr.elf

OUTPUT_FILE_PATH_AS_ARGS +=brewpi_avr.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

# AVR32/GNU C Compiler

































































./%.o: .././%.cpp
	@echo Building file: $<
	@echo Invoking: AVR8/GNU C Compiler : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-g++.exe$(QUOTE) -funsigned-char -funsigned-bitfields -Os -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -Wall -mmcu=atmega328p -c -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP)
	@echo Building target: $@
	@echo Invoking: AVR8/GNU Linker : 4.8.1
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-g++.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="brewpi_avr.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mrelax -mmcu=atmega328p  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "brewpi_avr.elf" "brewpi_avr.hex"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "brewpi_avr.elf" "brewpi_avr.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "brewpi_avr.elf" > "brewpi_avr.lss"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "brewpi_avr.elf" "brewpi_avr.srec"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.1056\avr8-gnu-toolchain\bin\avr-size.exe" "brewpi_avr.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "brewpi_avr.elf" "brewpi_avr.a" "brewpi_avr.hex" "brewpi_avr.lss" "brewpi_avr.eep" "brewpi_avr.map" "brewpi_avr.srec" "brewpi_avr.usersignatures"
	