#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  *new_dog -  prints a struct dog
  *@name: Is the name of the dog
  *@age: the age
  *@owner: the owner
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *raza;

	raza  = malloc(sizeof(dog_t));
	if (raza == NULL)
	{
		return (NULL);
	}
	raza->name = name;
	raza->age = age;
	raza->owner = owner;
	return (raza);
}
