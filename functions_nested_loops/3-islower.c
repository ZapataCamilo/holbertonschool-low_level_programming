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

	c = _islower('h');
	c = _islower('o');
	c = _islower(108);

	if (islower(c))
	{
		_putchar(c);
	}
	if (c == 'c' && islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
