#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - returns the sum of all its parameters
  *@n: Is the variable in the argument
  *
  *Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
	{
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (sum);
}
