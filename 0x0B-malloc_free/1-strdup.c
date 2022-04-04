#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - funct
 *
 * @str: para
 * Return: char*
 */
char *_strdup(char *str)
{
	char *arr;
	int size = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	arr = malloc(size * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	arr[i] = '\0';
	return (arr);
}
