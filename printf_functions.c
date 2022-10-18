#include "main.h"
#include <stdio.h>

/**
 * print_char - writes a single character to stdout(1)
 * @arg: argument
 * Return: On success 1
 */
int print_char(va_list arg)
{
  return (_putchar(va_arg(arg, int)));
}


/**
 * print_str - writes a string to stdout(1)
 * @arg: argument
 * Return: number of characters printex
 */
int print_str(va_list arg)
{
  int i;
  char *str = va_arg(arg, char*);
  i = 0;
  while (str[i] != \0)
  {
   _putchar(str[i]);
   i++;
  }
return(i);
}
