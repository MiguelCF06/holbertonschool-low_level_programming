#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: Null or the array concatenate.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int con1 = 0;
	unsigned int con2 = 0;
	char *conar;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[con1] != '\0')
		con1++;

	while (s2[con2] != '\0')
	{
		con2++;
	}
	if (n > con2)
		n = con2;

	conar = malloc(sizeof(char) * (con1 + n + 1));
	if (conar == NULL)
	{
		return (NULL);
	}
	for (con1 = 0; s1[con1] != '\0'; con1++)
	{
		conar[con1] = s1[con1];
	}
	for (con2 = 0; con2 < n; con1++, con2++)
	{
		conar[con1] = s2[con2];

	}
	conar[con1] = '\0';
	return (conar);
}
