#include <unistd.h>
#include "main.h"

/* more headers goes there */

/**
* print_alphabet_x10 - check the code
*
* Return: Always 0 (Success)
*/
void  print_alphabet_x10(void)
{
	char b;
	int n;

	for (n = '0'; n <= "10"; n++)
	{
		_putchar('\n');
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		} 
	}
}
