#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - is fun
 * @n: variable
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_rec(n, 1));
}
/**
 * _sqrt_rec - funct
 * @n: para
 * @x: para
 * Return: int
 */
int _sqrt_rec(int n, int x)
{
	if (n < 0)
		return (-1);
	if (n == x * x)
		return (x);
	if (n < x * x)
		return (-1);
	_sqrt_rec(n, x + 1);
}
