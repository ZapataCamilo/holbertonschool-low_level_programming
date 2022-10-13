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
	int o;
	
	if (k < 0)
	{
		o = -1 * (k % 10); 
	}
	else
	{
		o = k % 10;

		_putchar((o % 10) + '0');
	}

	return (o % 10);
}
