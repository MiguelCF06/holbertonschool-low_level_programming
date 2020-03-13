#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * printchar - function that prints chars
 * @c: The operator c
 * Return: Nothing
 */
void printchar(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * printint - function that prints integers
 * @i: The operator i
 * Return: Nothing
 */
void printint(va_list i)
{
	printf("%i", va_arg(i, int));
}
/**
 * printfloat - function that prints floats
 * @f: The operator f
 * Return: Nothing
 */
void printfloat(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * printstring - function that prints strings
 * @s: The operator s
 * Return: Nothing
 */
void printstring(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - function that prints all parameters
 * @format: The formats
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	va_list ptall;
	unsigned int i = 0;
	unsigned int x = 0;

	fmt formato[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL}
	};
	va_start(ptall, format);

	while (format != NULL && format[i] != '\0')
	{
		x = 0;
		while (formato[x].op != NULL)
		{
			if (format[i] == formato[x].op[0])
			{
				printf("%s", separator);
				formato[x].f(ptall);
				separator = ", ";
			}
			x++;
		}
		i++;
	}
	printf("\n");
	va_end(ptall);
}

