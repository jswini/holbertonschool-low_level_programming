#include <stdio.h>
#include "holberton.h"
/**
 * _islower - checks if the character is lower case
 * @c: character to check
 *
 * Return: 1 if lowercase alpha char, 0 if not
 */
int _islower(int c)
{
	if ((c > 97) && (c < 122))
		return (1);
	else
		return (0);
}
