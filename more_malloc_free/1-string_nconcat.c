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

  if (*s)
    {
      length = strlen(s);
    }

  return (length);
}

/**
* malloc_checked - allocates memory using malloc
* @b: integer
* Return: pointer to allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int number = 0;
	unsigned int numd = _strlen(s1) + n;
	unsigned int l = 0;
	char *str = NULL;

	str = malloc((numd) * sizeof(str));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (str == NULL)
		return (NULL);

	for (; number < numd - n; number++)
		str[number] = s1[number];
	
	for (; l < n; l++)
		str[number + l] = s2[l];
	return (str);

	free(str);
}
