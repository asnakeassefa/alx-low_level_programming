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
int b = 97;

while (a < 58)
{
putchar(a);
a++;
}
while (b < 103)
{
putchar(b);
b++;
}
putchar('\n');
	return (0);
}
