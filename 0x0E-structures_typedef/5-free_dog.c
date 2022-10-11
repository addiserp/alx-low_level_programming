#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - a function that frees dogs.
 *@d: a parameter for dog.
 *Description - free_dog: to frees dogs.
 *Return: will return nothing.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
