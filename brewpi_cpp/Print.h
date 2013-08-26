/* 
 * File:   Print.h
 * Author: mat
 *
 * Created on 19 August 2013, 20:40
 */

#ifndef PRINT_H
#define	PRINT_H

#include "stddef.h"
#include "string.h"
#include "stdint.h"


class Print {
public:
    Print();
    Print(const Print& orig);
    virtual ~Print();
    
    // convenience method to print a string
    size_t write(const char *str) {
      if (str == NULL) return 0;
        return write((const uint8_t *)str, strlen(str));
    }
    virtual size_t write(const uint8_t *buffer, size_t size);
    
     size_t print(const char* str)
     {
         return write(str);
     }
    
     size_t print(char c) {
         return write((const uint8_t*)&c, 1);
     }
    
private:

};


class Stream : public Print
{    
};

#endif	/* PRINT_H */

