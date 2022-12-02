#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *get_nodeint_at_index - return the nth node
  *@head: first list
  *@index: node to stop
  *Return: pointer to nth
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
