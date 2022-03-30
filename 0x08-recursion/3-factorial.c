#include "main.h"
#include <stdio.h>
/**
 * factorial - function name
 *
 * @n: is parameter
 * Return: int
 */
int factorial(int n)
{
	int v = n;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	v = factorial(n - 1) * v;
	return (v);
}
