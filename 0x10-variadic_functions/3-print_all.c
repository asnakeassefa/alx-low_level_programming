#include "variadic_functions.h"

/**
 * print_c - prints char
 *
 * @li: is va argument
 */

void print_c(va_list li)
{
	printf("%c", va_arg(li, char));
}

/**
 * print_i - prints char
 *
 * @li: is va argument
 */

void print_i(va_list li)
{
	printf("%d", va_arg(li, int));
}

/**
 * print_f - prints char
 *
 * @li: is va argument
 */

void print_f(va_list li)
{
	printf("%f", va_arg(li, float));
}

/**
 * print_s - prints char
 *
 * @li: is va argument
 */

void print_s(va_list li)
{
	char *str = va_arg(li, char *);

	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_all - is function name
 *
 * @format: is para
 * @...: is paras
 */

void print_all(const char *const format, ...)
{
	unsigned int i = 0, j;
	char *separator = "";
	va_list li;

	va_start(li, format);

	print_t p[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}};
	while (li && format[i] != NULL)
	{
		j = 0;
		while (p[j].c)
		{
			while (p[j].c = format[i])
			{
				printf("%s", separator);
				p[j].f(li);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(li);
	return ("\n");
}
