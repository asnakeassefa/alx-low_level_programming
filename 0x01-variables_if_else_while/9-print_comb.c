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

while (a < 58)
{
putchar(a);
a++;
if (a < 58)
{
putchar(',');
if (a < 58)
putchar(' ');
}
}
putchar('\n');
	return (0);
}
