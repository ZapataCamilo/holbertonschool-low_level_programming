#include <unistd.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/* more headers goes there */

/**
*print_last_digit- check the code
*@k: Input int
* Description:  The script pritn alpha case
*
* Return: Always 0 (Success)
*/
int print_last_digit(int k)
{

	int o = (K % 10);
	int r = (O * (-1));

	if (o >= 0)
	{
		_putchar(48 + o);
		return (o);

	}
	else
	{
		_putchar(48 + r);
		return (r);
	}
}
