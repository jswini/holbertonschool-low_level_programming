#include "holberton.h"

/**
 *jack_bauer - outputs times 1 minute at a time
 *
 *Return: void
*/
void jack_bauer(void)
{
	int min1;
	int min2;
	int hour1;
	int hour2 = 0;

	for (hour2 = 0; hour2 < 3; hour2++)
	{
		{
			for (hour1 = 0; hour1 < 4; hour1++)
			{
				for (min2 = 0; min2 < 6; min2++)
				{
					for (min1 = 0; min1 < 10; min1++)
					{
						_putchar(hour2 + '0');
						_putchar(hour1 + '0');
						_putchar(':');
						_putchar(min2 + '0');
						_putchar(min1 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
