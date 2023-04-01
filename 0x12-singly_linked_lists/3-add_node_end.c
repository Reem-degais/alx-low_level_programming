#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *m;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = NULL;
	m = *head;

	if (m == NULL)
	{
		*head = new;
	}
	else
	{
		while (m->next != NULL)
			m = m->next;
		m->next = new;
	}

	return (*head);
}
