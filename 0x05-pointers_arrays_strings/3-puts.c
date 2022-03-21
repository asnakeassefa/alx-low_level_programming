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
while(val < strlen((const char *)str))
put(str[val]);
val++;
}
