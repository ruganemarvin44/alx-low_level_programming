#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of line
 * @head: Address of the string node of list
 * @str: Address of the string to insert into the new node
 * Return: Address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
