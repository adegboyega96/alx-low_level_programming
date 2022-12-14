#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: n is an integer
 *
 * Return: 1 if successful
 */

int print_sign(int n)
{
	if (n >= 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
