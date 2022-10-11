#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0 ; number <= 10; number++)
	{

		printf("%d", number);
		if (number == 10)
		{
			printf("\n");
		}
	}

}
