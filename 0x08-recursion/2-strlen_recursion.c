#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - fun
 * @s: parameter
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
		n = _strlen_recursion(s + 1) + 1;
	return (n);
}
