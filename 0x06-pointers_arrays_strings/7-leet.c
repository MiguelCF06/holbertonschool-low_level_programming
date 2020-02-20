#include "holberton.h"
/**
 * leet - Encode a string.
 * @s: String.
 * Return: Always 0.
 */
char *leet(char *s)
{
	int countstr;
	int countal;
	char arrayleet[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char arrayletters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (countstr = 0; s[countstr] != '\0'; countstr++)
	{
		for (countal = 0; countal < 10; countal++)
		{
			if (s[countstr] == arrayletters[countal])
			{
				s[countstr] = arrayleet[countal];
				break;
			}
		}
	}
	return (s);
}
