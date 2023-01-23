#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - calls a function given a parameter on each element of array
 * @array: integer of array
 * @size: size of the array
 * @action: pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
