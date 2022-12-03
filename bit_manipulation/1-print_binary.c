#include "main.h"

/**
 * print_binary - function that prints the binary
 * @n: the number to comvert
 */
void print_binary(unsigned long int n)
{
	if (n && n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
