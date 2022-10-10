#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Main;
	for (Main = 'a'; Main <= 'z'; Main++)
	{
		putchar(Main);
		putchar('\n');
	}
	return (0);
}
