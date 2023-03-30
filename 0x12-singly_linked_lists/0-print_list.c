#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to the list.
 * Return: number of node.
 */


size_t print_list(const list_t *h)
{
	const list_t *c = h;
	size_t count = 0;
	unsigned int i;

	while (c != NULL)
	{
		if (c->str != NULL)
		{
			_putchar(91);
			_putchar(c->len + '0');
			_putchar(93);
			for (i = 0; i < c->len; i++)
				_putchar(c->str[i]);
			_putchar('\n');
		}
		else
		{	
			_putchar(91);
			_putchar(0 + '0');
			_putchar(93);
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar('\n');
		}
		count++;

		h = h->next;
	}

	return (count);
}
