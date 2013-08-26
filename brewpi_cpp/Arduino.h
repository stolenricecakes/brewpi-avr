/* 
 * File:   Arduino.h
 * Author: mat
 *
 * Created on 19 August 2013, 20:02
 * 
 * Stubs various definitions from the Arduino SDK.
 */

#ifndef ARDUINO_H
#define	ARDUINO_H

#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"
#include "stddef.h"
#include "stdarg.h"
#include "limits.h"
#include "math.h"
#include "print.h"
#include <string.h>
#include <algorithm>

#define strcpy_P strcpy
#define strlcpy_P strncpy
#define sprintf_P sprintf
#define strcmp_P strcmp
#define memcpy_P memcpy
#define vsnprintf_P vsnprintf
#define ltoa itoa                       // 32-bit platform itoa is good enough
#define _delay_us(us)       // no cross platform us delay


inline char *strchrnul(const char *s, int c)
{
       char *ptr = strchr(s, c);
       if (!ptr) {
               ptr = strchr(s, '\0');
       }
       return ptr;
}

/*
namespace sc = std::chrono;

inline uint32_t millis() {             
    auto time = sc::system_clock::now(); // get the current time
    auto since_epoch = time.time_since_epoch(); // get the duration since epoch
    auto millis = sc::duration_cast<sc::milliseconds>(since_epoch);
    long now = millis.count(); // just like java (new Date()).getTime();
}
*/

inline uint32_t millis() { return 0; } // todo -implement

#define PROGMEM         // makes no sense in a unified memory architecture
#define PSTR(x) x


#define DEVICE_DISCONNECTED SHRT_MIN
typedef uint8_t DeviceAddress[8];



typedef unsigned char byte;


using std::min;

#define TWO_PI 6.283185307179586476925286766559

inline double random(double max) {
    return (double(rand())*max/RAND_MAX);
}
#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))

#endif	/* ARDUINO_H */

