#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog - a function that initialize a variable of type struct dog
 *@name: a parameter for dog name.
 *@age: a parameter for dog age.
 *@owner: a parameter for dog owner.
 *Description - new_dog: initialize the value of dog with type dog_t.
 *Return: will return nothing.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog dog_t;
dog_t new_dog;
if (new_dog == NULL)
return (NULL);
new_dog.name = name;
new_dog.age = 0;
new_dog.owner = owner;
}
