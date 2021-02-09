#include "holberton.h"
/**
 *_isalpha - tests if input is a character
 *
 *@c: ascii for a character
 *
 *Return: 1 if character, 0 if not character
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
