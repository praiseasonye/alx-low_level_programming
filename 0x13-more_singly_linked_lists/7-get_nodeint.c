#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list.
 *
 * @head: A pointer to the head of the list.
 * @index: index of the node of choice
 *
 * Return: If the node does not exist - NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *marker = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				marker =  head;
				break;
			}
			head = head->next;
			i++;
		}
		else
		return (NULL);
	}
	return (marker);
}
