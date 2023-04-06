#include "lists.h"

/**
*free_listint2 - a function that frees a listint_t list.
*
*@head: pointer to the list head
*
*Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temporary = (*head)->next;
			free(*head);
			*head = temporary;
		}
	}
	return;
	head = NULL;
}
