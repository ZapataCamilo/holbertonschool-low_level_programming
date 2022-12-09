#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: is the head node
 * @index: is the index of the node;
 * Return: the nth of a dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	unsigned int i = 1;

	tmp = head;

	while (i <= index && tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (index > i)
		return (NULL);

	return (tmp);
}
