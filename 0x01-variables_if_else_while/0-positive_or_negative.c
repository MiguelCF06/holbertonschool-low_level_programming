#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main
 *Description: This program will take a random number and display whether it is
 *positive, negative, or zero.
 *Return: Returns 0 upon successful run.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is zero", n);
putchar('\n');
return (0);
}
