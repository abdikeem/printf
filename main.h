#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>

int _putchar(char);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);

#endif