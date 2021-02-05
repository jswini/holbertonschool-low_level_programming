#include <stdio.h>

/**
 *main - outputs the alphabet backwards
 *
 *Return: 0
 */
int main(void)
{
	char ltr = 'z';

	while (ltr >= 'a')
	{
		putchar(ltr);
		ltr--;
	}
	putchar('\n');
	return (0);
}
