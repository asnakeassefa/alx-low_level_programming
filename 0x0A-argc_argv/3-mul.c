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
		printf("Error");
		return (0);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d", mul);
	return (0);
}
