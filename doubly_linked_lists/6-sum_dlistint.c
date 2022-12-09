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
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
