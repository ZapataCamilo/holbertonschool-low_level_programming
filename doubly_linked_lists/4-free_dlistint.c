#include "lists.h"

/**
 * free_dlistint -  function that frees a dlistint_t list
 * @head: is the node to free
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr;

	while (head != NULL)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
}
