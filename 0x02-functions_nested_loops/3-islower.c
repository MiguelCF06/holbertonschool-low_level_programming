#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 * int c - integer of the code
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c < 'z')
{
return (1);
}
else
return (0);
}
