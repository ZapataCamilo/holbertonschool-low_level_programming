#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t count_l;
    count_l = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", h->len, h->str);
        }
        count_l++;
        h = h->next;
    }
    return(count_l);
}