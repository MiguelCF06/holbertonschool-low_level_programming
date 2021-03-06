#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the minimum number of coins to make change for an amount of $$.
 * @argc: argument count
 * @argv: Argument vector contains the arguments passed to the program
 * Return: Always 0 (Success) and exit
 */
int main(int argc, char *argv[])
{
	int count;
	int pesos[5] = {25, 10, 5, 2, 1};
	int change = 0;

	if (argc == 2)
	{
		int value = atoi(argv[1]);

		for (count = 0; count < 5; count++)
		{
			while (value - pesos[count] >= 0)
			{
				value = value - pesos[count];
				change++;
			}
		}
	printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	if (argc < 0)
		printf("0\n");
	return (0);
}
