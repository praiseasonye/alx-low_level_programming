#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 *
 * @head: A pointer to the address of the list head.
 *
 * Return: If the linked list is empty - return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *popper;
	int ret_value;

	if (*head == NULL)
		return (0);

	popper = *head;
	ret_value = (*head)->n;
	*head = (*head)->next;

	free(popper);

	return (ret_value);
}
