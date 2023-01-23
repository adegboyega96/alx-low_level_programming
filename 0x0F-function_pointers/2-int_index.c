#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element for which the
 * cmp function does not return 0
 *
 * @array: integer array
 *
 * @size: size of the array
 *
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}

