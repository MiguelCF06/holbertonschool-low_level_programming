#include "holberton.h"
/**
 * rot13 - Encode a string in rot13.
 * @s: String.
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int countstr;
	int countltr;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (countstr = 0; s[countstr] != '\0'; countstr++)
	{
		for (countltr = 0; letter[countltr] != '\0'; countltr++)
		{
			if (s[countstr] == letter[countltr])
			{
				s[countstr] = rot[countltr];
				break;
			}
		}
	}
	return (s);
}
