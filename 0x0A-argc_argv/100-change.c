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
	int value = atoi(argv[1]);
	int pesos[5] = {25, 10, 5, 2, 1};
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (count = 0; count < 5; count++)
		{
			while (value - pesos[count] >= 0)
			{
				value = value - pesos[count];
				change++;
			}
		}
	printf("%i\n", change);

	if (argc < 0)
		printf("0\n");
	return (0);
}
