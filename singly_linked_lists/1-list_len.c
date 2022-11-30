#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *list_len - The funsion that show me the numbers of elements
  *@h: the list of elements
  *Return: return the numbers of elements
  */
size_t list_len(const list_t *h)
{
	int r = 0;

	while (h != NULL)
	{
		r++;
		h = h->next;
	}
	return (r);
}
