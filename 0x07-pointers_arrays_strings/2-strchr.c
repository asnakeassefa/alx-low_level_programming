#include "main.h" 

/**
 * _strchr - is a funciton
 * @s: this is s
 * @c: this is b
 * @Return: char*
 */

char *_strchr(char *s, char c)
{
unsigned int n = 0;
char *p = s;

while (*s != c)
{
p++;
}
s = p;
return(s);
}
