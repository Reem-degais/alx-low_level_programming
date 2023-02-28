#include"main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: - an int
 * @b: - an in 
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
