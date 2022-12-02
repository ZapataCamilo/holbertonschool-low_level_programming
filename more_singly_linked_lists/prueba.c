#include <stdio.h>

void main()
{
    int i = 0;
    int d = 0;

    for (; i < 10; i++)
    {
        for (; d <= 5; d++)
        {
            printf("%d", d);
        }
        printf("\n");
    }
}