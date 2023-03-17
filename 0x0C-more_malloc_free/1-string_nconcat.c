#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int us1, us2, uk, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (us1 = 0; s1[us1] != '\0'; us1++)
		;

	for (us2 = 0; s2[us2] != '\0'; us2++)
		;

	if (n > us2)
		n = us2;

	uk = us1 + n;

	k = malloc(uk + 1);

	if (k == NULL)
		return (NULL);

	for (i = 0; i < uk; i++)
		if (i < us1)
			k[i] = s1[i];
		else
			k[i] = s2[i - us1];

	k[i] = '\0';

	return (k);
}
