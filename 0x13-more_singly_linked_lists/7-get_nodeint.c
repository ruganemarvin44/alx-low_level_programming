#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node at a certain index
 * in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
