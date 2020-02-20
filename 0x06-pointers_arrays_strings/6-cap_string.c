#include "holberton.h"
/**
 * cap_string - Capitalize the letters.
 * @s: String.
 * Return: S that is the string.
 */
char *cap_string(char *s)
{
	int count;

	for (count = 0; s[count] != '\0' ; count++)
	{
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '.')
		{
			if(s[count] == '\t')
				s[count] = ' ';
			if (s[count] == '.' && s[count + 1] == '\n')
			count += 2;
			else
				count += 1;
			if (s[count] >= 'a' && s[count] <= 'z')
			{
				s[count] = s[count] - 32;
			}
		}
	}
		return (s);
}
