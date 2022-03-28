#include "main.h" 

/**
 * _strchr - is a funciton
 * @s: this is s
 * @c: this is b
 * @Return: char*
 */

char *_strchr(char *s, char c)
{
while (*s != c)
s++;
return(s);
}
