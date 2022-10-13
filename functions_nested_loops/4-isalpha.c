#include <unistd.h>
#include "main.h"
#include <ctype.h>

/* more headers goes there */

/**
*_isalpha - check the code
*@c: Input char
* Description:  The script pritn alpha case
*
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{

	int A = isalpha(c);

	if (A == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
