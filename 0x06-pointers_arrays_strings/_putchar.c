#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
<<<<<<< HEAD
	return (write(1, &c, 1));
=======
        return (write(1, &c, 1));
>>>>>>> a393a7472d6be4bb4b87d3bc55e5d9d267813f96
}
