#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - allocates memory and checks for success
 * @b: size of memory to allocate
 *
 * Return: void, exit 98 upon failure to allocate
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
