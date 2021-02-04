#include <stdio.h>

/**
 *main - outputs the alphabet using a loop
 *
 *Return: 0
 */
int main(void)
{
	char ltr = 'a';

	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr++;
	}
	putchar('\n');
	return (0);
}
