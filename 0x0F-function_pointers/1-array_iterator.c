#include "function_pointers.h"

/**
 * array_iterator - is function
 *
 * @array: is para 1
 * @size: is para 2
 * @action: is para 3
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
