#include "holberton.h"

char *reverse(char *s)
{
	if (*s != '\0')
		reverse(s + 1);
	return (s);
}

int is_palindrome(char *s)
{
	char *r  = reverse(s);
	if (*s == *r && *s != '\0')
	{
		s++;
		r--;
	}
	else
	{
		return(1);
	}
	if (*s != *r)
		return (0);
	return(0);
}
