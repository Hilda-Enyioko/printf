#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
int print_identifiers(char spc, va_list arg);

typedef struct identifierStruct
{
char *identifier;
int (*function)(va_list);
} identifierStruct;
#endif

