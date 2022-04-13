#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - is function
 *
 * @name: is para
 * @f: is para
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
