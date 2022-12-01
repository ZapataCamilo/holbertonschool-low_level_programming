#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - funcion to count the node
 * @h: the node
 * Return: The number of node
*/
size_t listint_len(const listint_t *h)
{
	int num_node = 0;

	while (h != NULL)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
