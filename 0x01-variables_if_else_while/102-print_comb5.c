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
int b = 48;
while (b < 57)
{
int c = a;
while (c < 58)
{
int d = b;
while (d < 58)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a < 58)
{
if (a == 57 && b == 56 && c == 57 && d == 57)
{
break;
}
putchar(',');
putchar(' ');
}
d++;
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
