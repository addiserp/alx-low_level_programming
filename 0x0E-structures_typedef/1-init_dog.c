#include "dog.h"

/**
 *init_dog - a function that initialize a variable of type struct dog
 *@d: a parameter
 *@name: a parameter for dog name.
 *@age: a parameter for dog age.
 *@owner: a parameter for dog owner.
 *Description - init_dog: initialize a variable of dog.
 *Return: will return nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
