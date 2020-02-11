#include "holberton.h"
/**
 * jack_bauer - Clock code.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int hour;
int mins;
for (hour = 0; hour < 24; hour++)
{
for (mins = 0; mins < 60; mins++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar('\n');
}
}

}
