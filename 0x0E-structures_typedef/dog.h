#ifndef MAIN_H
#define MAIN_H

/**
 *dog -  creates a structure for dog object
 *Description - dog:  is struc type.
 *Return: void.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
