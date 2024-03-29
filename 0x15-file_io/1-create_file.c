#include "main.h"

/**
 * create_file - creates a file.
 * @filename:  is the name of the file.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int l = 0, f, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, l);

	if ((f == -1) | (w == -1))
		return (-1);

	close(f);
	return (1);


}
