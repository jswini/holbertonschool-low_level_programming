#include "holberton.h"
int _strlen(char *s);
/**
 *rev_string - outputs the reverse of the input character by character
 *@s: string input
 *
 *Return: Void
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char c;

	len--;
	for (i = 0; len > i; i++, len--)
	{
		c = s[i];
		s[i] = s[len];
		s[len] = c;
	}
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
