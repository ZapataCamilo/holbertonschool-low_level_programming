#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - fucion to delete the head node
 * @head: node to delete
 * Return: if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp, *actual;
	int i;

	if (head == NULL)
	{
		return (0);
	}
	tmp = actual = *head;
	if (*head)
	{
		i = tmp->n;
		*head = tmp->next;
		free(tmp);
	}
	else
	{
		i = 0;
	}
	return (i);
}
