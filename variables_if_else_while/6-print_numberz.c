#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numberchar;

	for (numberchar = '0'; numberchar <= '9'; numberchar++)
	{

		putchar(numberchar);
		
		if (numberchar == '9')
		{
			putchar('\n');
		}
	}
}
