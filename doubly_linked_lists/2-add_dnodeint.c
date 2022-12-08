#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @head: the first node
 * @n: the value of n
 * Return:  the address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *beginning;

	beginning = malloc(sizeof(dlistint_t));
	if (beginning == NULL)
		return (NULL);

	beginning->n = n;
	beginning->next = *head;
	beginning->prev = NULL;
	*head = beginning;
	beginning = beginning->next;

	return (beginning);
}
