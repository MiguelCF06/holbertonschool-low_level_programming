#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates a string.
 * @s1: String 1
 * @s2: String 2
 * Return: Null or the array concatenate.
 */
char *str_concat(char *s1, char *s2)
{
	int con1;
	int con2;
	char *conar;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	conar = malloc(sizeof(s1) + sizeof(s2 - 1));

	if (conar == NULL)
	{
		return (NULL);
	}
		for (con1 = 0; s1[con1] != '\0'; con1++)
		{
			conar[con1] = s1[con1];
		}

		for (con2 = 0; s2[con2] != '\0'; con1++, con2++)
		{
			conar[con1] = s2[con2];
		}
		return (conar);
}
