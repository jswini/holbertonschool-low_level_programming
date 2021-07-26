#include <stdio.h>
#include "dog.h"
/**
 * print_dog - outputs the struct dog to standard output
 * @d: struct to output
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = nil;
	printf("Name: %s\n", d->name);
	if (d->age == '\0')
		printf("Age: %s\n", nil);
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		d->owner = nil;
	printf("Owner: %s\n", d->owner);

}
