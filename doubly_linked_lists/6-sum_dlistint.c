#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: is the fist node
 * Return: returns the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	if (head == NULL)
		return (0);
	return (sum);
}
