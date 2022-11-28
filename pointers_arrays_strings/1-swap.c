#include <stdio.h>
#include "main.h"

/**
* swap_int - check the code
*@a: is the pointer
*@b: is the pointer
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
