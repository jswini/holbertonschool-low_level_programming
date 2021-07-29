#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - outputs a list of numbers
 * @separator: text to separate numbers
 * @n: number of ints passed
 *
 *  Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else
		{
			printf("%d\n", va_arg(ap, int));
		}
	}
}
