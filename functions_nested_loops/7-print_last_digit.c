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
	int l = (j*(-1));
	if (o >= 0)
	{
		_putchar('0'+o);
		_putchar('\n');

	}
	else
	{
		_putchar('0'+l);
		_putchar('\n');
		return (l);
	}
	return (o);

}
