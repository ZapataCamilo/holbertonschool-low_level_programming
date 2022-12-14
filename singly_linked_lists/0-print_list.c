#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - The funsion that print the list
 * @h: the head list
 *
 * Return: return the number of the nodes
*/
size_t print_list(const list_t *h)
{
	int count_l;

	count_l = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count_l++;
		h = h->next;
	}
	return (count_l);
}
