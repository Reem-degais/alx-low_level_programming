#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: integer.
 * @index: integer.
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int s;

	if (index > 63)
		return (-1);

	s = 1 << index;
	return ((s & n) > 0);
}
