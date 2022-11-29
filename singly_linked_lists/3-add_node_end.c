#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *add_node_end - The funsion that add a new node
  *@head: head of the node
  *@str: nmaes
  *Return: addres of new_node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end;

	new_node_end = malloc(sizeof(list_t));

	while (new_node_end != NULL)
	{
		new_node_end->next = *head;
	}
	if (new_node_end == NULL)
	{
		return (NULL);
	}
	new_node_end->str = strdup(str);
	new_node_end->len = strlen(str);
	*head = new_node_end;
	return (new_node_end);
}
