#include"main.h"
/**
 * _memset - is a funciton
 * @param s 
 * @param b 
 * @param n 
 * @return char*
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for(i=0; i<n; i++)
*(s + i) = b;
return(s);
}
