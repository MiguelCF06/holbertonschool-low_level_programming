#include "holberton.h"

void _puts_recursion(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
