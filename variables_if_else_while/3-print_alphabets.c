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
	char Mayus;

	for (Main = 'a'; Main <= 'z'; Main++)
	{
		putchar(Main);
		if (Main == 'z')
		{
			for (Mayus = 'A'; Mayus <= 'Z'; Mayus++)
			{
				putchar(Mayus);
				if (Mayus == 'Z')
				{
					putchar('\n');
				}
			}
		}

	}
	return (0);
}
