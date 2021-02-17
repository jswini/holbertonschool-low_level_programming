#include "holberton.h"
/**
 *largest_number - finds the largest number of 3
 *@a: first int
 *@b: second int
 *@c: third int
 *
 *Return: largest int
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		largest = a;
	}
	else
		largest = b;
	if (largest < c)
	{
		largest = c;
	}
	if (largest < a)
	{
		largest = a;
	}
	return (largest);
}
