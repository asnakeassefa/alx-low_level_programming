#include "main.h"
/**
 * swap_int - Entry point
 * @a: - First operand
 * @b: - Second operand
 * Nothing to return
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
