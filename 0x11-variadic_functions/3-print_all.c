#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - outputs in different formats
 * @format: how to output
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int separator = 0;
	char * str;

	va_start(ap, format);
	while (format[i])
	{
		{
			switch (format[i])
			{
			case 'c':
			{
				printf("%c", va_arg(ap, int));
				separator = 1;
				break;
			}
			case 'i':
				printf("%d", va_arg(ap, int));
				separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				separator = 1;
				break;
			case 's':
			{
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
			}

			}
			i++;
			if (separator == 1)
				printf(", ");
			separator = 0;
		}

	}
		printf("\n");
}
