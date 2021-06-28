#include <stdio.h>
#include "holberton.h"
/**
 * _abs - compute the absolute value of an int
 * @number: int passed
 *
 * Return: 0 or positive int
 */
int _abs(int number)
{
	if (number < 0)
		return (number *= (-1));
	else
		return (number);
}
