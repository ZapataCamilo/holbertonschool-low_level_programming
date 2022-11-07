#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	/*(*d).name = name;
	(*d).owner = owner;
	(*d).age = age;*/

	if (d == NULL)
		printf(" ");
	if (d->name == NULL)
		printf("(nil)");

	if (d->owner == NULL)
		printf("(nil)");


	printf("Name: %s\n", d->name);
	printf("Age: %.001f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
