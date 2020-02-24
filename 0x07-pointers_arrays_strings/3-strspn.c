#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: String
 * @accept: Number of bytes
 *
 * Return: Bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, b, t;
	unsigned int byte = 0;

	i = 0;
	while (s[i] != '\0')
	{
		t = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				t = 1;
			}
		}
		if (t == 0)
			break;
		byte++;
		i++;
	}
	return (byte);
}
