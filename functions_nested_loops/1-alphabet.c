#include <unistd.h>
#include "main.h"

/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void  print_alphabet(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
