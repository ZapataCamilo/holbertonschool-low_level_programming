#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *sum_listint - return the nth node
  *@head: first list
  *Return: return the sum af the nodes
  */
int sum_listint(listint_t *head)
{
	int add = 0, i;

	if (head == NULL)
		return (0);
	for (i = 0; head; i++)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
