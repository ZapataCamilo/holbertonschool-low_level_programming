#include <unistd.h>
#include "main.h"
#include <ctype.h>

/* more headers goes there */

/**
* _islower - check the code
*@c: Input char
* Description:  The script pritn lower case
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
