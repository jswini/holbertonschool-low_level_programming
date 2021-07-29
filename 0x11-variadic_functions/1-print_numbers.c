#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * _isdigit - checks input for if it is a digit
 * @c: input
 *
 *Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

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

	if (separator == NULL)
		separator = "";

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
