#include "holberton.h"

/**
 *jack_bauer - outputs times 1 minute at a time
 *
 *Return: void
*/
void jack_bauer(void)
{
	int min1;
	int hour1;

		for (hour1 = 0; hour1 < 24; hour1++)
		{
			for (min1 = 0; min1 < 60; min1++)
			{
				_putchar((hour1 / 10) + '0');
				_putchar((hour1 % 10) + '0');
				_putchar(':');
				_putchar((min1 / 10) + '0');
				_putchar((min1 % 10) + '0');
				_putchar('\n');
			}
		}
}
