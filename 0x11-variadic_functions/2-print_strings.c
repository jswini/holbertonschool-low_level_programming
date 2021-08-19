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
	char *string;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			string = "(nil)";
		if (i != n)
		{
			if (separator != NULL)
			{
				printf("%s%s", string, separator);
			}
			else
			{
				printf("%s", string);
			}
		}
		else
		{
			printf("%s", string);
		}
	}
	va_end(ap);
	printf("\n");
}
