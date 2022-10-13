#include <unistd.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/* more headers goes there */

/**
*print_last-digit- check the code
*@k: Input int
* Description:  The script pritn alpha case
*
* Return: Always 0 (Success)
*/
int print_last_digit(int k)
{
	int o = (k % 10);
	
	if (o > 0)
	{
		o = k % 10;
	}
	else
	{
		o = -1 * (k % 10);

		_putchar('0' + (o % 10));
	}

	return (o % 10);
}
