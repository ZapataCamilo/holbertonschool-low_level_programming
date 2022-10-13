#include <unistd.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/* more headers goes there */

/**
*jack_bauer- check the code
*void: Input int
* Description:  The script pritn the hour
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int t;
	int h;

	for (t = 0; t < 24; t++)
	{
		for (h = 0; h < 60; h++)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar(':');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar('\n');
		}
	}
}
