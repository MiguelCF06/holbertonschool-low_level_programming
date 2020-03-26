#include "holberton.h"
/**
 *binary_to_uint - Converts a binary number to an unsigned int.
 *@b: pointer with the number in binary
 *Return: The number in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int times, idx, val;

	if (b == NULL)
		return (0);

	idx = 0;
	while (b[idx] != '\0')
		idx++;
	idx = idx - 1;
	times = 0;
	n = 0;
	while (idx >= 0)
	{
		val = b[idx];
		if (val == 48)
		{
			times++;
			idx--;
		}
		else if (val == 49)
		{
			n = n + (1 << times);
			times++;
			idx--;
		}
		else
			return (0);
	}
	return (n);
}
