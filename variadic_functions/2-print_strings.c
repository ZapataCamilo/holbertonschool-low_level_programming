#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  *print_strings - function that prints strings
  *@separator: is the string to be printed between the strings
  *@n: is the number of strings passed to the function
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *t;

	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
		{
			printf("%s", va_arg(li, char*));
		}
		else
		{
			printf("%s%s", va_arg(li, char*), separator);
		}
	}
	va_end(li);
	printf("\n");
}
