#include "holberton.h"
/**
 *_isdigit - determines if the input is a number
 *@c: character to be tested
 *
 *Return: 1 if a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
