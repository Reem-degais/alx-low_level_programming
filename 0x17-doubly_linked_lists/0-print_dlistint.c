#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: a pointer to a list.
 * Return: the number of element.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t c = 0;

	while (node)
	{
		printf("%i\n", node->n);
		c++;
		node = node->next;
	}

	return (c);
}
