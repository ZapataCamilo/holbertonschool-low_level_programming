#include "dog.h"
#include <stdlib.h>
/**
  *free_dog - free all the variables
  *@d: is the struct
  *
  *
  */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
