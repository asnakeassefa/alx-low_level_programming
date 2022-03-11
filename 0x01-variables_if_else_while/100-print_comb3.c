#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;

while (a < 57)
{
int b = a+1;

while (b < 58)
{
putchar(a);
putchar(b);
if (a < 56)
{
putchar(',');
if (a < 57)
putchar(' ');
}
b++;
}
a++;
}
putchar('\n');
	return (0);
}
