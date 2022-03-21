#include "main.h"
#include <string.h>
/**
 * _puts - Entry point
 * @str: - First operand
 * Nothing to return
 */
void _puts(char *str)
{
int val;

val = 0;
while(str[val] != 0)
{
_putchar(str[val]);
val++;
}
}
