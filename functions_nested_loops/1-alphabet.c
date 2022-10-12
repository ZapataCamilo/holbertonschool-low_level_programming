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
	print_alphabet();
	char a;
	
	for (a = "a"; a <= "z"; a++)
	{
		print_alphabet(a);
	}
	print_alphabet('\n');

	return (0);
}
