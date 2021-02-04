#include <stdio.h>

/**
 *main - outputs the 2 alphabets using 2 loops
 *
 *Return: 0
 */
int main(void)
{
	char ltr = 'a';


	while (ltr <= 'z')
	{
		if (ltr != 'e' && ltr != 'q')
		{
			putchar(ltr);
		}
		ltr++;
	}
	putchar('\n');
	return (0);
}
