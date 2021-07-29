#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - finds the sum of all parameters
 * @n: number of parameters to use
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);

	sum = 0;
	for (i = 1; i <= n; i++)
		sum += va_arg(ap, int);
	return (sum);
}
