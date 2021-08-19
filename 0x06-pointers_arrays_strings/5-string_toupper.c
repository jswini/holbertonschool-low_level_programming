#include <stdio.h>
#include "holberton.h"
/**
 * string_toupper - changes case of string if character is lowercase
 * @str: string to change
 *
 * Return: string in upper case
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = (str[i] - 32);
		}
	}
	return (str);
}
