#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - determines how long a string is
 * @s: the input string to measure
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{}
	return (count);
}
/**
 * rev_string - reverses a string
 * @s: input string
 *
 * return: void
 */
void rev_string(char *s)
{
	int index;
	int length = _strlen(s) - 1;
	int limit = length / 2;
	int temp;

	for (index = 0; index <= limit; index++)
	{
		temp = *(s + index);
		*(s + index) = *(s + (length - index));
		*(s + (length - index)) = temp;
	}
}
