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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}
