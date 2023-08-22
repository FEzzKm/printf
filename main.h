#ifndef PRINTFP_H
#define PRINTFP_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#define NULL_STRINGS "(null)"

/*prototype of _printf.c */
int _printf(const char *format, ...);

/*fuctions definition  fuction.c */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_decimal(va_list args);

#endif
