#include <unistd.h>
#include "main.h"
#include <ctype.h>

/* more headers goes there */

/**
*print_sign - check the code
*@n: Input char
* Description:  The script pritn alpha case
*
* Return: Always 0 (Success)
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
