#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 *            in a linked list_t list.
 *
 * @h: a pointer to the start of the list.
 *
 * Return: the number of elements in the list.
 *
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
