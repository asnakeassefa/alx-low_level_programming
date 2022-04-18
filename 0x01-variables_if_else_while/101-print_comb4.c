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

while (a < 56)
{
int b = a + 1;
while (b < 57)
{
int c = b + 1;
while (c < 58)
{
putchar(a);
putchar(b);
putchar(c);
if (a < 55)
{
putchar(',');
if (a < 55)
putchar(' ');
}
c++;
}
b++;
}
a++;
}
putchar('\n');
	return (0);
}
