#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings and newline
 * @separator: text between strings
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		if (i != n)
		{
			if (separator != NULL)
			{
				printf("%s%s", va_arg(ap, char*), separator);
			}
			else
			{
				printf("%s", va_arg(ap, char *));
			}
		}
		else
		{
			printf("%s\n", va_arg(ap, char *));
		}
	}
	va_end(ap);
}
