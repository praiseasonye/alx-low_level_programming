#include "lists.h"

/**
 *add_nodeint_end - a function that adds a new node
 *at the end of a listint_t list.
 *@head: pointer to the list head
 *@n: integar to contained in the list
 *
 *
 *Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest_node;
	listint_t *marker = *head;

	latest_node = malloc(sizeof(listint_t));
	if (latest_node != NULL)
	{
		latest_node->n = n;
		latest_node->next = NULL;
	}
	else
		return (NULL);
	if (marker == NULL)
	{
		*head = latest_node;
	}
	else
	{
		while (marker->next != NULL)
			marker = marker->next;
		marker->next = latest_node;
	}
	return (latest_node);
}
