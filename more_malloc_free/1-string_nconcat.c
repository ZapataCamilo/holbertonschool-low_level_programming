#include <stdio.h>
#include <stdlib.h>
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

	while (s[length] != 0)
		length++;

	return (length);
}

/**
* string_nconcat - allocates memory using malloc
* @s1:s the string
* @s2: is the stirng that we have to concatenate
* @n:  is greater or equal to the length of s2 then use the entire string s
* @n:  is greater or equal to the length of s2 then use the entire string s2
* Return: pointer to allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int number = 0;
	unsigned int numd = 0;
	unsigned int l = 0;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	numd = _strlen(s1) + n;

	str = malloc((numd + 1) * sizeof(str));

	if (str == NULL)
		return (NULL);

	for (; number < numd - n; number++)
		str[number] = s1[number];
	for (; l < n; l++)
		str[number + l] = s2[l];

	str[numd] = '\0';

	return (str);
	free(str);
}
