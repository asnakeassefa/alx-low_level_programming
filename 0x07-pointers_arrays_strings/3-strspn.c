#include "main.h" 

/**
 * _strspn - is a funciton
 * @s: this is s
 * @accept: this is b
 * @Return: char*
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n;
while (*s)
{
while(*accept)
{
if(*s == *accept)
{
n++;
accept++;
}
s++;
}
return(n);
}
