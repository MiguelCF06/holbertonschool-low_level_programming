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
		if (s[count - 1] == 0 ||
		    s[count - 1] == 9 ||
		    s[count - 1] == 10 ||
		    s[count - 1] == 32 ||
		    s[count - 1] == '.' ||
		    s[count - 1] == ',' ||
		    s[count - 1] == ';' ||
		    s[count - 1] == '!' ||
		    s[count - 1] == '?' ||
		    s[count - 1] == '"' ||
		    s[count - 1] == '(' ||
		    s[count - 1] == ')' ||
		    s[count - 1] == '{' ||
		    s[count - 1] == '}')
		{
			if (s[count] >= 'a' && s[count] <= 'z')
			{
				s[count] = s[count] - 32;
			}
		}
	}
	return (s);
}
