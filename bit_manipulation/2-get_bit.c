#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: is the number that have to give the bit
 * @index: value of a bit
 * Return:  the value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitStatus = 0;

	bitStatus += (n >> index) & 1;

	if (index > 11)
		return (-1);
	return (bitStatus);
}
