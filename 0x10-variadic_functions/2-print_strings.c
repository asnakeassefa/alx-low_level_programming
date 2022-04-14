#include "variadic_functions.h"

/**
 * print_strings - it print string
 *
 * @separator: is para
 * @n: is para
 * @...: ispara
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(li, char *);
		if (a)
			printf("%s", a);
		else
			printf("%s", "(nil)");

		if (separator && i < n - 1)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(li);
}
