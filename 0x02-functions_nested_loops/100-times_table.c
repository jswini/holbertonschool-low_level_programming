#include "holberton.h"
/**
 *print_times_table - prints a times table of size n
 *@n: size of table, not bigger than 15 or smaller than 0
 *
 *Return: void
 */
void print_times_table(int n)
{
	int a, b, result;

	if (n >= 0 && n < 16)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				result = a * b;
				if ((result /100) == 0)
				{
					if (result < 10)
						_putchar(' ');
					_putchar(' ');
					if (result > 9)
						_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result % 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
