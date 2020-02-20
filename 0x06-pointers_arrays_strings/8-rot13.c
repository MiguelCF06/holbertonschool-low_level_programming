#include "holberton.h"

char *rot13(char *s)
{
	int countstr;
	int countal;
	char arrayrotmin[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	char arrayletmin[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char arrayrotMAY[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	char arrayletMAY[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	for (countstr = 0; s[countstr] != '\0'; countstr++)
	{
		for(countal = 0; countal < 27; countal++)
		{
			if(s[countstr] == arrayletmin[countal] && s[countstr] == arrayletMAY[countal])
			{
				s[countstr] = arrayrotmin[countal];
			}
			else
			{
				s[countstr] = arrayrotMAY[countal];
			}
		}
	}
	return (s);
}
