#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y;
x = '0';
y = '0';
while (x <= '9')
{
while (y <= '9')
{
putchar(x);
putchar(y);
if (x != '9' ||  y != '9')
{
putchar(',');
putchar(' ');
}
y++;
}
y = '0';
x++;
}
putchar('\n');
return (0);
}
