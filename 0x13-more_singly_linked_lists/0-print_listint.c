#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements
 *                 of a listint_t list.
 *
 * @h: a pointer the the head of the node
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
