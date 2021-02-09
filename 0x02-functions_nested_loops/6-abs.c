#include "holberton.h"
/**
 *_abs - finds the absolute value of a number
 *@n: integer to be checked
 *
 *Return: n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else if (n > 0)
		return (n);
	else
		return (0);
}
