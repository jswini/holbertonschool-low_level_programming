#include "holberton.h"
/**
 *_strstr - finds the first occurance of a subtring
 *@needle: substring to search for
 *@haystack: string to search in
 *
 *Return: pointer to substring if found or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if  (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return(haystack + i);
		}
		i++;
	}
	return(haystack +i);
}
