#include <stdio.h>
#include "dog.h"

/**
  * init_dog - Inialize the variables
  *@d: Is the struct
  *@name: is the name
  *@age: is the age
  *@owner: is the owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
