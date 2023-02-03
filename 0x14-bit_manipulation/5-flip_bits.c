#include "main.h"

/**
 * flip_bits - returns the number of bits to flip number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits to change (integer)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
