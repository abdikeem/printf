#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>

typedef struct Cspecs
{
char cs;
void (*f)();
} cs_t;

int _printf(const char *format, ...);
void _putchar_c(char c);
void _putchar(va_list a);
void print_str(va_list a);
char *inttobinary(va_list list);

#endif