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

	if (argc < 3)
		printf("Error");
	else
	{
		while (argc-- && argc >= 1)
			mul = mul * atoi(argv[argc]);
		printf(mul);
	}
	return (0);
}
