#include "lists.h"

/**
 *add_nodeint - a function that dds a new node at the beginning
 *of a listint_t list
 *@head: A pointer to the address of the head
 *@n: the integer of  the new node
 *
 *Return: NULL if function fails
 *Or address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}
	return (NULL);
}
