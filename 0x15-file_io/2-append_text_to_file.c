#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, l;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	f = open(filename, O_WRONLY | O_APPEND);
	w = write(f, text_content, l);

	if ((f == -1) | (w == -1))
		return (-1);

	close(f);
	return (1);

}
