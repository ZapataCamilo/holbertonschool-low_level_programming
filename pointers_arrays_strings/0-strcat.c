#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	int p = 0;
	/*int f = 0;*/
	
	while (dest[p] != '\0')
	{
		p++;
	}
	while (dest[p] == '\0')
	{
		dest = src;
	}
	return (dest);
}
