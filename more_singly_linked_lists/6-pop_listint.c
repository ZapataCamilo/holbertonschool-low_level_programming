#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t *tmp;
    tmp = malloc(sizeof(listint_t));

    if (head == NULL)
        return (0);

    if (head == NULL)
    {
            *head = tmp;
    }
    else
    {
        free(tmp);
    }
    return(tmp->n);
}