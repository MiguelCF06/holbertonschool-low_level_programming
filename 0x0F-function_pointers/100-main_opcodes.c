#include <stdio.h>
#include <stdlib.h>
void getopcode(char *m, int num);
/**
 * main - Entry point
 * @argc: argument count
 * @argv: Argument vector contains the arguments passed to the program
 * Return: Always 0 (Success) and exit
 */
int main(int argc, char *argv[])
{
	int numberby;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numberby = atoi(argv[1]);
	if (numberby < 0)
	{
		printf("Error\n");
		exit(2);
	}
	getopcode((char *)main, numberby);

	return (0);
}
/**
 * getopcode - Get the opcode conditionate by the number of bytes and print it
 * @m: Content of the main (the number that we past)
 * @num: Number of bytes
 * Return: Void
 */
void getopcode(char *m, int num)
{
	int x;

	for (x = 0; x < num; x++)
	{
		printf("%.2hhx", m[x]);
		if (x < num - 1)
			printf(" ");
	}
	printf("\n");
}
