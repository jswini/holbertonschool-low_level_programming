#include <stdio.h>
/**
 * main - outputs the alphabet
 *
 * Return: 0
 */
int main(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		if ((letter != 101)&&(letter != 113))
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
