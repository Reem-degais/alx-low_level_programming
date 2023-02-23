#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest = 0;

	if (a < b)
	{
		largest = a;
		a = b;
		b = largest;
	
	}
	else if (a < c)
	{
		largest = a;
		a = c;
		c = largest;
	}

	return (a);
}
