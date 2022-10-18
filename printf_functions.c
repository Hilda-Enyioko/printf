#include "main.h"
#include <unistd.h>

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
 * @str: string to be printed
 * Return: 
 */
int print_str(char *str)
{
  int i;
  i = 0;
  while (str[i] != \0)
  {
   _putchar(str[i]);
   i++;
  }
return(i);
}
