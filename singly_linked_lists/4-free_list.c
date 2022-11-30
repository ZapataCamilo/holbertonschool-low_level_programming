#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - funcion to free a list
 * @head: one of the lists to free
*/
void free_list(list_t *head)
{
	list_t *lim;

	while (head != NULL)
	{
		lim = head;
		head = head->next;
		free(lim->str);
		free(lim);
	}
}
