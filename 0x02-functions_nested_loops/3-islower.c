#include "holberton.h"
/**
 *_islower - checks if the character input is lower case or upper case
 *@c: character to be checked
 *
 *Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
