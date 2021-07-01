#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	int larger;

	if (a > b)
		larger = a;
	else
		larger = b;
	if (c > larger)
		larger = c;
	largest = larger;

	return (largest);
}
