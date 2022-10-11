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

	for (Main = 'a'; Main <= 'd'; Main++)
	{
		putchar(Main);

	}
	for (Main = 'f'; Main <= 'p'; Main++)
	{
		putchar(Main);
	}
	for (Main = 'r'; Main <= 'z'; Main++)
	{
		putchar(Main);
		if (Main == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
