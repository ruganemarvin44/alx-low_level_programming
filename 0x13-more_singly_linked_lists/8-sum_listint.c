#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t
 * linked list
 * @head: first node of the function
 *
 * Return: if list is empty return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
