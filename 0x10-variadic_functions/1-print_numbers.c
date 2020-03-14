#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - function that returns the sum of all its parameters
 * @n: Num of parameters
 * @separator: The comma that is a string
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nu;
	unsigned int x;
	int p = 0;


	va_start(nu, n);
	for (x = 0; x < n; x++)
	{
		p = va_arg(nu, unsigned int);
		printf("%d", p);
		if (x < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nu);
}
