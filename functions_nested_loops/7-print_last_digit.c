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
	int s = k + ("-1");
	return (s % 10);
}
