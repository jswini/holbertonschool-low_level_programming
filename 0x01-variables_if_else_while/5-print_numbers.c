#include <stdio.h>
/**
 * main - outputs 0 thru 9
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);
	printf("\n");
	return (0);
}
