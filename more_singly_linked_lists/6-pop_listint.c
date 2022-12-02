#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - fucion to delete the head node
 * @head: node to delete
 * Return: if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
    listint_t *tmp;
    int i = 0;

    if (*head == NULL)
    {
	    return (0);
    }
    i = (*head) ->n;
    tmp = (*head)->next;
    free(*head);
    *head = tmp;

    return (i);
}
