#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - outputs based on if the input is an alphabetic character
 *@c: input to be checked
 *
 * Return: 1 if letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
