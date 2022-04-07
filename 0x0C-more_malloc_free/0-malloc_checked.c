#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - is fun
 *
 * @b: para
 * Return: void*
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
		free(p);
	}
	return (p);
}
