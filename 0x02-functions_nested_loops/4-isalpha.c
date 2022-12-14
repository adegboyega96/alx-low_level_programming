#include "main.h"

/**
 * _isalpha  - checks if it is an alphabet
 * @c: c is an ascii character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
