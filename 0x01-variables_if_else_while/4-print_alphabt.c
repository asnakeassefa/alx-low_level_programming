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
int a = 97;

while (a < 123)
{
if (a != 101 && a != 113)
putchar(a);
a++;
}
putchar('\n');
	return (0);
}