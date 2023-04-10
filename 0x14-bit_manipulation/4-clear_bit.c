#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: a pointer to intger.
 * @index: index.
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
