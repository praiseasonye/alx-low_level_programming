#include "lists.h"

/**
*free_listint - a function that frees
*a listint_t list.
*@head: the head of the list
*
*Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;
		free(temporary);
	}
}
