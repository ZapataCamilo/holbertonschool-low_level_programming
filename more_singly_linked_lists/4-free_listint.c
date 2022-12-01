#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

 /**
 * free_listint - funcion to free a list
 * @head: one of the lists to free
*/
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head != NULL)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
}
