#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: Argument vector contains the arguments passed to the program
 * Return: Always 0 (Success) and exit
 */
int main(int argc, char *argv[])
{
	int res;
	int num1;
	int num2;
	char operator;
	char *sign;
	int (*ptfun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2][0];
	if ((operator != '*' && operator != '/' && operator != '+'
	     && operator != '-' && operator != '%')
	    || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	sign = argv[2];
	ptfun = get_op_func(sign);
	res = (*ptfun)(num1, num2);
	printf("%d\n", res);
	return (0);
}
