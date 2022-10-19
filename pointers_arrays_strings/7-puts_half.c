#include <stdio.h>
#include "main.h"

/**
* puts_half - check the code
*@str: Is the pointer
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
		_putchar(str[(number / 2 + 1) + second]);
		second++;
	}
	_putchar('\n');

}
