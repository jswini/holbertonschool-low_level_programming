#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int letter;

	for (letter = 122; letter >= 97; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
