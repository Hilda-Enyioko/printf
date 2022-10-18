#include "main.h"

/**
 * print_identifiers - prints special characters
 * @spc: special character after %
 * @arg: argument
 * Return: identifier
 */
int print_identifiers(char spc, va_list arg)
{
int i;
identifierStruct funcs[]{
{"c", print_char},
{"s", print_str},
{"d", print_int},
{"i", print_int},
{NULL, NULL}
};
for (i = 0; funcs[i].identifier != \0; i++)
{
if (funcs[i].identifier == spc)
return(funcs[i].function(arg));
}
return (0);
}
