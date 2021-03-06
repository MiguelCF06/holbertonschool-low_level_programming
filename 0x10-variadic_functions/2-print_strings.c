#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @n: Num of parameters
 * @separator: The comma that is a string
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list lst;
	char *s;


	va_start(lst, n);

	for (x = 0; x < n; x++)
	{
		s = va_arg(lst, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
