#include <stdio.h>
#include <stdlib.h>

/**
 * main - is main function
 *
 * @argc: para
 * @argv: para
 * Return: int
 */

int main(int argc, char **argv)
{
	printf(argv[--argc]);
	return (0);
}
