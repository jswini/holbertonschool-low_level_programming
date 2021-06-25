#include <stdio.h>
/**
 * main - outputs digits using putchar
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	putchar('\n');
	return (0);
}
