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
