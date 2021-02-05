#include <stdio.h>
/**
 *main - prints digits of hex
 *
 *Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (num = 'a'; num < 'g'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
