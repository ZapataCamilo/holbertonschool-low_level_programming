#include "lists.h"

/**
 * print_dlistint - t prints all the elements of a dlistint_t list
 * @h: is the head node
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
