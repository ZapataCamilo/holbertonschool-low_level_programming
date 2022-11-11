#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  *print_numbers - function that prints numbers, followed by a new line
  *@separator: the separator of the numbers
  *@n: the numbers to print
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list li;

	va_start(li, n);

	for (; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%d", va_arg(li, const unsigned int));
		else
			printf("%d%s", va_arg(li, const unsigned int), separator);
	}
	va_end(li);
	printf("\n");
}
