#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: Argument vector contains the arguments passed to the program
 * Return: Always 0 (Success) and exit
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y]; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[x]);
		}
	printf("%i\n", sum);
	return (0);
}
