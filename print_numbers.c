#include "main.h"
#include <stdio.h>

/**
 * print_int - prints an integer
 * @arg: argument
 * Return: On success 1
 */
int print_int(va_list arg)
{
int n = va_arg(arg, int);
int i;
unsigned int divisor = 1, digit, res;
if (n < 0)
{
_putchar('-');
res++;
n = n * -1;
}

i = 0;
while (n / divisor > 9)
{
i++;
divisor *= 10;
}
for (; divisor >= 1; n %= divisor, divisor /= 10, res++)
{
digit = n / divisor;
_putchar('0' + digit);
}
return (res);
}
