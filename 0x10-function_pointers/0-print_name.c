#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that uses pointer to print a name a specific way
 * @name: name to print
 * @f: pointer to callback function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
