#include "holberton.h"
/**
 * print_last_digit - print the last digit.
 * @n: integer as a number
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int a = n % 10;
int b;
if (a < 0)
a = -a;
b = a + '0';
_putchar(b);
return (a);
}
