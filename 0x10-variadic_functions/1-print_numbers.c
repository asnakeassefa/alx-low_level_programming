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
	if (*separator == '\0')
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, int));
		if (i < n - 1)
			printf("%c ", *separator);
	}
	printf("\n");
}
