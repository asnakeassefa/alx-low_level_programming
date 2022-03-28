#include "main.h" 

/**
 * _memset - is a funciton
 * @s: this is s
 * @b: this is b
 * @n: this is n
 * @Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(s + i) = b;
return (s);
}
