#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - is fun
 *
 * @b: para
 * Return: void*
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	return (malloc(b));
}
