#include <stdio.h>
/**
 * main - outputs numbers, fizz, buzz, or fizzbuzz
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
			printf("FizzBuzz ");
		else if (number == 100)
			printf("Buzz\n");
		else if (number % 5 == 0)
			printf("Buzz ");
		else if (number % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", number);
	}
	return (0);
}
