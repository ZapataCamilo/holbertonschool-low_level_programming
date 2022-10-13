#include <unistd.h>
#include "main.h"
#include <ctype.h>

/* more headers goes there */

/**
* int _islower - check the code
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{

	if (islower(c))
	{
		_putchar("'%c'", c);
	}
	if (c == 'c')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
