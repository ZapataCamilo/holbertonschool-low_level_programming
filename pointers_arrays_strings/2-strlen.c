#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strlen - check the code
*@s: is the pointer
* Return: Always 0.
*/
int _strlen(char *s)
{
	int length = 0;

	if (*s)
	{
		length = strlen(s);
	}

	return (length);
}
