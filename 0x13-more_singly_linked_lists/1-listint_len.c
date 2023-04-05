#include "lists.h"


/**
 *listint_len - A functon that returns the number of elements
 *in a linked listint_t list
 *@h: A pointer to the list head
 *
 *
 *Return: the number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_size = 0;

	while (h)
	{
		node_size += 1;
		h = h->next;
	}
	return (node_size);
}
