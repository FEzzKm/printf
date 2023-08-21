#ifndef printfp_H
#define printfp_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#define NULL_STRINGS "(null)"

/*prototype _printf.c */
int _printf(const char *format, ...);

/*fuctions definition  allfuctions.c */
int print_char(va_list p);
int print_int();
int print_string();
int print_percent();

