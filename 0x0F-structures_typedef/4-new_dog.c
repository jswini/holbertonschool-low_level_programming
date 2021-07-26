#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates and initializes instance of struct dog as dog_t type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: instance of dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t) * 1);
	if (dog1 == NULL)
		return (NULL);
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
	return (dog1);
}
