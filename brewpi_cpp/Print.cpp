/* 
 * File:   Print.cpp
 * Author: mat
 * 
 * Created on 19 August 2013, 20:40
 */
#include <stdio.h>
#include <iostream>

#include "Print.h"

#include "windows.h"
#include "conio.h"


Print::Print() {
}

Print::Print(const Print& orig) {
}

Print::~Print() {
}

size_t Print:: write(const uint8_t *buffer, size_t size)
{
    return size;
}

static int is_pipe = 0;
static HANDLE input_handle = 0;


StdIO::StdIO()
: in(std::cin), out(stdout)
{
    DWORD dw;
  input_handle = GetStdHandle(STD_INPUT_HANDLE);
  is_pipe = !GetConsoleMode(input_handle, &dw);

}
    


void StdIO::print(char c) {
    fputc(c,out);
}
void StdIO::print(const char* c) {
    fputs(c,out);
}
void StdIO::printNewLine() {
    fputs("\r\n", out);
    flush();
}
void StdIO::println() {
    printNewLine();
}


int input_available()
{
  DWORD nchars;
  /* When using Standard C input functions, also check if there
   is anything in the buffer. After a call to such functions,
   the input waiting in the pipe will be copied to the buffer,
   and the call to PeekNamedPipe can indicate no input available.
   Setting stdin to unbuffered was not enough, IIRC */
  if (stdin->_cnt > 0)
    return 1;
  if (is_pipe)
  {
    /* When running under a GUI, you will end here. */
    if (!PeekNamedPipe(input_handle, NULL, 0, NULL, &nchars, NULL))
      /* Something went wrong. Probably the parent program exited.
         Could call exit() here. Returning 1 will make the next call
         to the input function return EOF, where this should be
         catched then. */
      return 1;

    return (nchars != 0);
  }
  else
    return _kbhit() != 0; /* In "text-mode" without GUI */
}

int StdIO::available() { 
    return input_available();
}

void StdIO::begin(unsigned long) 
{
}

size_t StdIO::write(uint8_t w) { 
    fputc(w, out);
    return 1;
}

int StdIO::read() {                     
    char c;
    in.get(c);
    return c;
}

void StdIO::flush() { fflush(out); }


