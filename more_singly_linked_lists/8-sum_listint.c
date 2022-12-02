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
	int add = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
