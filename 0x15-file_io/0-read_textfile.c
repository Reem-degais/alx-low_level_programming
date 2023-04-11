#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @filename: variable pointer.
 * @letters: the number of letters it should read and print.
 * Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, f, l;
	char *t;

	t = malloc(sizeof(char) * letters);

	if (t == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(t);
		return (0);
	}

	l = read(f, t, letters);

	count = write(STDOUT_FILENO, t, l);

	close(f);

	return (count);

}
