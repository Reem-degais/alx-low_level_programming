#include "lists.h"

/**
 * dlistint_len - return the number of element.
 * @h: a pointer to list
 * Return: nu,ber of element.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t c = 0;

	while (node)
	{
		c++;
		node = node->next;
	}

	return (c);
}
