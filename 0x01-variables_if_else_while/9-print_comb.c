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
putchar(',');
putchar(' ');
}
putchar('\n');
	return (0);
}
