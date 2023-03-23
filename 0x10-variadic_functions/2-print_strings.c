#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator:  the string to be printed between the strings.
 * @n:  the number of strings passed to the function.
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
