#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: double pointer to argument.
 * Return:pointer to the new concatenate string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	int x, y;
	int cntstr = 0;
	int movpos = 0;
	char *arrconc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			cntstr++;
		}
		cntstr++;
	}
	cntstr++;
	arrconc = malloc(sizeof(char) * cntstr);
	if (arrconc == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			arrconc[movpos] = av[x][y];
			movpos++;
		}
		arrconc[movpos] = '\n';
		movpos++;
	}
	arrconc[movpos] = '\0';
	return (arrconc);
}
