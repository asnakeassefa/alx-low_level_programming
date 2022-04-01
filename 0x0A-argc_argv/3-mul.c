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
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	mul = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
	printf("%d\n", mul);
	return (0);
}
