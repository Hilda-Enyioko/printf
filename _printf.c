#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: the format string
 * Return: number of bytes printed(res)
 */
int _printf(const char *format, ...)
{
va_list arg;
unsigned int i;
int res = 0, identres = 0;
va_start(arg, format);

if (format == NULL)
{
return (-1);
}
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
res++;
continue;
}
if (format[i + 1] == '%')
{
_putchar('%');
res++;
continue;
}
if (format[i + 1] == '\0')
return (-1);

identres = print_identifiers(format[i + 1], arg);
if (identres == -1 || identres != 0)
i++;
if (identres > 0)
res = res + identres;
if (identifier == 0)
{
_putchar('%');
res++;
}
}
va_end(arg);
return (res);
}
