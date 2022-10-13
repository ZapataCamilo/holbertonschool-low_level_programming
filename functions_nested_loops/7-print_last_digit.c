#include <unistd.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/* more headers goes there */

/**
*_abs- check the code
*@k: Input int
* Description:  The script pritn alpha case
*
* Return: Always 0 (Success)
*/
int print_last_digit(int k)
{
	int j = abs(k);

	if (j >= 0)
	{
		_putchar(j, j  % 10);
	}
	return (j);
}
