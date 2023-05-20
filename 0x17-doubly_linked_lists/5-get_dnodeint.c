#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int c = 0;

	while (node && c != index)
	{
		c++;
		node = node->next;
	}
	if (node && c == index)
		return (node);
	return (NULL);
}
