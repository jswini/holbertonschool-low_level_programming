#include "holberton.h"
int _strlen(char *s);
/**
 *_strncat - concatenates 2 strings taking only n characters from the second
 *@dest: first input and final destination
 *@src: second input
 *@n: number of characters in src to concatenate
 *
 *Return: new dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
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
