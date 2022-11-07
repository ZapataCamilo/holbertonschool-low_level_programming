#ifndef dog_h
#define dog_h
/**
  * struct dog - contains what I need to give to the code
  *@name: give me the name of the dog
  *@age: give me the age of the dog
  *@owner: the name of the owner
  *
  *Description: This give me the arguments that I need to take
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
