#include "lists.h"
#include <unistd.h>
#include <stdio.h>


/**
 * print_list - a function that prints all the elements pf a
 *              list_t list.
 *
 * @h: a pointer to the singly linked list node
 *
 * Return: the number of nodes.
 *
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *h_ptr;

	h_ptr = h;
	while (h_ptr != NULL)
	{
		if (h_ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h_ptr->len, h_ptr->str);
		count++;
		h_ptr = h_ptr->next;
	}
	return (count);
}
