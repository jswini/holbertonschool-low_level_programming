#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - checks for an uppercase letter
 * @c: input to chec
 *
 * Return: 0 if uppercase, 1 if not
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
