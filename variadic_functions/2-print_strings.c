#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  *
  *
  *
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n -1)
		{
			printf("%s", va_arg(li, char*));
		}
		else
		{
			printf("%s%s", va_arg(li, char*), separator);
		}
		/*if(va_arg(li, char*) == NULL)
		{
			printf("(nil)");
		}*/
	}
	va_end(li);
	printf("\n");
}
