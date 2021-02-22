#include "holberton.h"
/**
 *_strcmp - compares 2 strings and returns the ascii value difference if any
 *@s1: first string to compare
 *@s2: second string to compare
 *
 *Return: different in ascii values
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}
	result = s1[i] - s2[i];
	return (result);
}
