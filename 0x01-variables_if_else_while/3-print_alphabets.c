#include <stdio.h>

/**
 *main - outputs the 2 alphabets using 2 loops
 *
 *Return: 0
 */
int main(void)
{
	char ltr = 'a';
	char capltr = 'A';

	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr++;
	}

	while (capltr <= 'Z')
	{
		putchar(capltr);
		capltr++;
	}
	putchar('\n');
	return (0);
}
