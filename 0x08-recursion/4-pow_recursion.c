#include "main.h"
/**
 * _pow_recursion - pow
 * @x: para 1
 * @y: para 2
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	int v = 1;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	v = x * _pow_recursion(x, y - 1);
	return (v);
}
