#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the address of the head of the list.
 * @idx: index index of the listint_t list
 * @n: The integer that the new node contains.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *iterate = *head;
	unsigned int node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = iterate;
		*head = n_node;
		return (n_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (iterate == NULL || iterate->next == NULL)
			return (NULL);

		iterate = iterate->next;
	}

	n_node->next = iterate->next;
	iterate->next = n_node;

	return (n_node);
}
