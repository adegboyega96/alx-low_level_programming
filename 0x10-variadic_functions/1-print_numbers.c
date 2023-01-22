#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints number followed by new line
 *
 * @separator: strings to be printed between numbers
 *
 * @n: integers passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int numbers;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args, int);

		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", numbers);
			else
				printf("%d", numbers);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", numbers);
			else
				printf("%d%s", numbers, separator);
		}
	}
}

