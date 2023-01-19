#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameter
 *
 * @n: number of parameters
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;

	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		total += va_arg(ptr, int);

	va_end(ptr);

	return (total);
}
