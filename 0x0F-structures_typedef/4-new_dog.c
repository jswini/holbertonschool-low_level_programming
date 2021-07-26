#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - determines how long a string is
 * @s: the input string to measure
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{}
	return (count);
}

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: NULL if fails, pointer to new string if success
 */
char *_strdup(char *str)
{
	int i;
	char *dest;
	int len;

	if (str != NULL)
	{
		len = _strlen(str);
		dest = malloc(sizeof(char) * (len + 1));
		if (dest == NULL)
			return (NULL);
		for (i = 0; i <= len; i++)
			dest[i] = str[i];
	}
	else
		return (NULL);
	return (dest);
}

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
	if (name == NULL)
		return (NULL);
	dog1->name = _strdup(name);
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->age = age;
	if (owner == NULL)
		return (NULL);
	dog1->owner = _strdup(owner);
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	return (dog1);
}
