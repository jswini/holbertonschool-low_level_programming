#include <stdio.h>
/**
 * main - outputs digits of hex
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	for (digit = 97; digit <= 102; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
