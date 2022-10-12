#include <unistd.h>
#include "main.h"

/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char *w = "_putchar";

	while (*w)
	{
		w++;
		_putchar(*w);
	}
	_putchar('\n');

	return (0);
}
