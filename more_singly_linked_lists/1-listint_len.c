#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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