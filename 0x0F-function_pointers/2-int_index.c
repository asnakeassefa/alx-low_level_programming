#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function
 *
 * @array: is para 1
 * @size: is para 2
 * @cmp: is para 3
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
