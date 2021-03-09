#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 *struct dog - a structure to create a dog descriptor
 *@name: char type to name the dog
 *@age: float type to give an age to the dog
 *@owner: char type to note the owner
 */
/*
 *need to header guard
 *need to define the structure and elements
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
