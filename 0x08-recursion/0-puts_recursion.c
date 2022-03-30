#include"main.h"
/**
 * _puts_recursion - done recursion
 * @s: this is parameter 
 * Returns: none
 */

void _puts_recursion(char *s)
{
_putchar(s);
s++;
_puts_recursion(s);
}
