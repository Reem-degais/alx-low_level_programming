#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, n = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
			i++;
		}
	}

	for (i -= 1; i >= 0; i--)
	{
		sum += ((b[i] - '0') * n);
		n *= 2;
	}
	return (sum);
}
