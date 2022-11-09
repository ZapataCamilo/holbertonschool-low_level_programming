#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str)
{
  unsigned int count = 0;
  char *two = NULL;
  unsigned int p = 0;

  if (str == NULL)
    {
      return (NULL);
    }

  while (str[count] != '\0')
    {
      count++;
    }

  two = malloc(sizeof(*str) * count + 1);

  if (two == NULL)
    {
      return (NULL);
    }

  while (p < count)
    {
      two[p] = str[p];
      p++;
    }
  return (two);
  free(two);
}
/**
  *new_dog -  prints a struct dog
  *@name: Is the name of the dog
  *@age: the age
  *@owner: the owner
  * Return: raza
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *raza;

	raza  = malloc(sizeof(dog_t));

	raza->name = _strdup(name);
	raza->age = age;
	raza->owner = _strdup(owner);

	if (raza == NULL)
	{
		return (NULL);
	}
	if (raza->name = NULL)
	{
		free(name);
	}
	if (raza->owmer == NULL)
	{
		free(owner);
	}

	return (raza);
	free(raza);
}
