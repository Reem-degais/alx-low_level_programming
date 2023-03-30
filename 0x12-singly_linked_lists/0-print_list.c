#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to the list.
 * Return: number of node.
 */


size_t print_list(const list_t *h)
{
	list_t *c = h;
	size_t count = 0;

	while (c != NULL)
	{
		if (c->str != NULL)
			printf("[%d] %s\n", c->len, c->str);
		else
			printf("[0] (nil)\n");

		count++;
		c = c->next;
	}

	return (count);
}
