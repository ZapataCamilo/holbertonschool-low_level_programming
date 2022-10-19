#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void puts_half(char *str)
{
	int number = 0;
	int second = 0;

	while (str[number] != 0)
	{
		number++;
	}
	while (second < number / 2)
	{
		_putchar(str[(number / 2) + second]);
		second++;
	}
	_putchar('\n');

}
