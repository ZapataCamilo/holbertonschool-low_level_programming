#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
void rev_string(char *s)
{
	int prin = 0;
	char seg = '\0';
	int i = 0;

	while (s[prin] != '\0')
	{
		prin++;
	}
	while (i < prin--)
	{
		seg = s[i];
		s[i++] = s[prin];
		s[prin] = seg;
	}

}
