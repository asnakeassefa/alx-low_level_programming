#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - is main function
 *
 * @argc: para
 * @argv: para
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argv[argc - 1] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
