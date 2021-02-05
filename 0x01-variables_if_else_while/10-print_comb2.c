#include <stdio.h>
/**
 *main - prints 2 digit ints with commas
 *
 *Return: 0
 */
int main(void)
{
	int num;
	int tens;

	for (tens = 0; tens < 10; tens++)
		for (num = 0; num < 10; num++)
		{
		putchar(tens + '0');
		putchar(num + '0');
		if (tens < 10 && num < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
