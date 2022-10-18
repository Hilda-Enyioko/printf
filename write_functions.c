#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a single character to stdout(1)
 * @c: character to be printed
 * Return: On Success 1
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}


/**
 * _puts _ writes a string to stdout(1)
 * @str: string to be printed
 * Return: 
 */
int _puts(char *str)
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
