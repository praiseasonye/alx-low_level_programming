#include "lists.h"


/**
 *print_listint - function that prints all the elements
 *of a listint_t list.
 *@h: A pointer to the list head
 *
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_size = 0;

	while (h)
	{
		node_size += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_size);
}

