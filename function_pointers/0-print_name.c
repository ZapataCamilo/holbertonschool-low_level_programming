#include "function_pointers.h"
#include <stdio.h>

/**
  *print_name - the funtcion that print
  *@name: The string that we have to dereference
  *void - what we have to return
  *@f: the funtion pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}

	f(name);
}
