#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) != 0);
}
