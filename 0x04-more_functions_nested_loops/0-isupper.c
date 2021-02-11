#include "holberton.h"
/**
 *_isupper - determines if the input is upper case
 *@c: character to process
 *
 *Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
