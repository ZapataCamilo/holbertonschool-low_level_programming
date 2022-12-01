#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - to add a node in the beginning
 * @head: is the first node
 * @n: the integer of the struct
 * Return: the addres of the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
