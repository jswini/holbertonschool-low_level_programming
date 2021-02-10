#include "holberton.h"
/**
 *times_table - outputs the multiplication tables
 *
 *Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int result;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = a * b;
			if ((result / 10) == 0)
			{
				if (b > 0)
					_putchar(' ');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
