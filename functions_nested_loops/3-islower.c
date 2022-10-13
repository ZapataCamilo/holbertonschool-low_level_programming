#include <unistd.h>
#include "main.h"
#include <ctype.h>

/* more headers goes there */

/**
* int _islower(int c) - check the code
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{

	int a = islower(c);

	if (a == 0) /*si la letra es mayuscula*/
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
