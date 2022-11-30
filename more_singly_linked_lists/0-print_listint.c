#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - The funcion to print the numbers
 * @h: the list to print
 * Return: the number of the nodes
*/
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
