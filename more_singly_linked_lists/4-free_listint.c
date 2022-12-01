#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head != NULL)
	{
		fr = head;
		fr = fr->next;
		
		free(fr);
	}
}