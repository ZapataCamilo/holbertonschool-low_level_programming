#include "main.h"

/**
 *_strlen - check the code
 *@s: pointer
 *Return: length of strenght
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the banari to convert
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int length = 0, al_comvert = 0, comvert = 1;

	if (!b)
		return (0);
	length = _strlen(b) - 1;

	while (length >= 0)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		al_comvert += comvert * (b[length] - '0');
		comvert <<= 1;
		length--;
	}
	return (al_comvert);
}
