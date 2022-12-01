#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  free_listint2 - to free nodes
 * @head: doble pointer to head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *cur, *fr_two;

	cur = *head;

	if (head == NULL)
	{
		return;
	}
	while (cur != NULL)
	{
		fr_two = cur;
		cur = cur->next;
		free(fr_two);
	}
	*head = NULL;
}
