#include <stdio.h>

/**
 *main - prints out the single digit positive ints
 *
 *Return: 0
 */
int main(void)
{
	int n = 0;

	for (; n < 10; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}
