#include "lists.h"

/**
 * add_dnodeint_end - function to at a new node in the end
 * @head: is the first node
 * @n: is the variable of the struct
 * Return: return  the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end, *new_node;

	new_end = malloc(sizeof(dlistint_t));

	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	if (*head == NULL)
	{
		*head =  new_end;
		new_end->next = NULL;
		new_end->prev = NULL;
	}
	else
	{
		new_node = *head;
		while (new_node->next != NULL)
			new_node = new_node->next;
		new_end->next = NULL;
		new_end->prev = new_node;
		new_node->next = new_end;
		new_end = new_node;
	}
	return (new_end);
}
