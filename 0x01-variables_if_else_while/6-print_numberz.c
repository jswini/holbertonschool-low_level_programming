#include <stdio.h>
/**
 *main - prints numbers with the putchar() function
 *
 *Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
