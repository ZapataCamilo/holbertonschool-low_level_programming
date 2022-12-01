#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - funcion to add a new node at the end
 * @head: the first node that is empy
 * @n: the varible fo the nodes
 * Return: return the addres of the last node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *new_node_end;

	new_node_end = malloc(sizeof(listint_t));

	if (new_node_end == NULL)
	{
		free(new_node_end);
		return (NULL);
	}

	new_node_end->n = n;
	if (*head == NULL)
	{
		*head = new_node_end;
	}
	else
	{
		new_node = *head;
		while (new_node->next != NULL)
		{
			new_node = new_node->next;
		}
		new_node->next = new_node_end;
	}
	return (new_node_end);
}
