#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
dog_t *new_dog;
if (name == NULL || owner == NULL)
return (NULL);
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
if (new_dog->name == NULL)
{
	free(new_dog);
	return (NULL);
}
new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
if (new_dog->owner == NULL)
{
	free(new_dog.name);
	free(new_dog);
	return (NULL);
}
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
