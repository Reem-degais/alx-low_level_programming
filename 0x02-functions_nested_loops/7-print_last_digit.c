#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int s;

	if (n < 0)
	{
		s = -1 * (n % 10);
		_putchar(s + '0');
		return (s);
	}
	else
	{
		s = n % 10;
		_putchar(s + '0');
		return (s);
	}
}

