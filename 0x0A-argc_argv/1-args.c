#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: Argument vector contains the arguments passed to the program
 * Return: Always 0 (Success) and exit
 */
int main(int argc, char *argv[])
{
	if (argc != 1 && *argv)
		printf("%i\n", argc - 1);
	else
		printf("0\n");
	return (0);
}
