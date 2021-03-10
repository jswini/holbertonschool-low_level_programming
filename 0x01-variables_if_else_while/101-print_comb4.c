#include <stdio.h>
/**
 *main - outputs combos of numbers
 *
 *Return: 0
 */
int main(void)
{
	int hunds, tens, ones;

	for (hunds = 0; hunds < 10; hunds++)
	{
		for (tens = 0; tens < 10; tens++)
		{
			for (ones = 0; ones < 10; ones++)
			{
				if (hunds != tens && hunds < tens
					&& hunds != ones && hunds < ones
				    && tens != ones && tens < ones)
				{
					putchar(hunds + '0');
					putchar(tens + '0');
					putchar(ones + '0');
					if (hunds != 7 || tens != 8 || ones != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
