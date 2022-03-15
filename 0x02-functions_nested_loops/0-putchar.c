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
    char put[] = "_putchar";
    int i = 0;
    while (i < 8)
    {
        putchar(put[i]);
        i++;
    }
    return(0);
}
