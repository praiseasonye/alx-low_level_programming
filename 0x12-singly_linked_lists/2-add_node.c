#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a nw node at the beginning
 *            of a list_t.
 *
 * @head: a pointer to a pointer to the first node in the linked
 *        list.
 *
 * Return: a pointer to the newly inserted node.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head  = temp;
	return (temp);
}
