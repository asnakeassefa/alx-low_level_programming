#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *create_array - funcition
 *
 * @size: is para
 * @c: is para
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size * sizeof(char); i++)
		arr[i] = c;
	return (arr);
}
