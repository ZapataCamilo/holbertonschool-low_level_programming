#include <stdio.h>
#include "main.h"

/**
*print_array - check the code for
*@a: is the pointer
*@n: is the numbers to print
* Return: Always 0.
*/
void print_array(int *a, int n)
{
	int p = 0;

	for (p = 0; p < n; p++)
	{
		if (p == n - 1)
		{
			printf("%d", a[p]);
		}
		else
		{
			printf("%d, ", a[p]);
		}
	}
	printf("\n");
}
