#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n:apointer to an  integer.
 * @index: index.
 * Return: 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}

