#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - is fun
 *
 * @separator: is para
 * @n: is para
 * @...: is para
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, int));
		if (separator && i < n - 1)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(li);
}
