#include "main.h"
#include <string.h>
/**
 * _strlen - Entry point
 * @s: - First operand
 * Return: length of string
 */
int _strlen(char *s)
{
int count;
while(*s != '\0')
{
count++;
s++;
}
return(count);
}
