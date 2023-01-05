#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: string array
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	static int i, len, temp;

	len = strlen(s);
	if (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
		_print_rev_recursion(s);
	}
}
