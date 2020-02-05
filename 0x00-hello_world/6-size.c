#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long long int longlongType;
long int longType;
char charType;

printf("Size of char: %ld bytes\n", sizeof(char));
printf("Size of int: %ld bytes\n", sizeof(int));
printf("Size of long int: %ld bytes\n", sizeof(long long int));
printf("Size of long long int: %ld bytes\n", sizeof(long int));
printf("Size of float: %ld byte\n", sizeof(float));
return (0);

}
