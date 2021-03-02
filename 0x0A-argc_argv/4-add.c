#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _isalpha(int c);
/**
 *main - adds sum of arguments if they are ints
 *@argc: number of arguments
 *@argv: array or arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (_isalpha(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
 *_isalpha - tests if input is a character
 *
 *@c: ascii for a character
 *
 *Return: 1 if character, 0 if not character
 */

int _isalpha(int c)
{
        if (c >= 65 && c <= 90)
                return (1);
        else if (c >= 97 && c <= 122)
                return (1);
        else
                return (0);
}
