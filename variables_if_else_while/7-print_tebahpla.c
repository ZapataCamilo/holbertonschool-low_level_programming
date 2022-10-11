#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{

		if (alph == 'a')
		{
			for (alph = 'z'; alph >= 'a'; alph--)
			{
				putchar(alph);
				if (alph == 'a')
				{
					putchar('\n');
				}
				if (alph == 'a')
				{
					break;
				}
			}
		}
	}
	return (0);
}
