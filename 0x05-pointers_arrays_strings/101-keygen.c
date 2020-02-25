#include "holberton.h"
#include <stdio.h>

int main ()
{
	int contador = 0;
	
	srand (time(NULL));

	char randomchar;
	int lengthpassword = 62;

	for (contador = 0; contador < lengthpassword; contador++)
	{

		randomchar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
		printf("%c", randomchar);
	}
	putchar('\n');
	return (0);
}
