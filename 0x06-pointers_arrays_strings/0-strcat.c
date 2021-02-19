#include "holberton.h"
int _strlen(char *s);
/**
 *_strcat - concatenates the 2 source inputs
 *@dest: first input and final destination
 *@src: second input
 *
 *Description: This function concatenates 2 inputs, while
 *removing the null character from one.  dest has it's null
 *character removed, then src is added in it's entirety
 *Return: new version of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	c = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] = src[i];
	return (dest);
}


/**
 *_strlen - outputs the length of the string s
 *@s: string passed to be measured
 *
 *Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{

	}
	return (count);
}
