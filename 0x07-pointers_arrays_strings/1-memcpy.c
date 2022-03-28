#include "main.h" 

/**
 * _memcpy - is a funciton
 * @dest: this is s
 * @src: this is b
 * @n: this is n
 * @Return: char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for(i = 0; i < n; i++)
*(dest + i) = *(src + i);
return(dest);
}
