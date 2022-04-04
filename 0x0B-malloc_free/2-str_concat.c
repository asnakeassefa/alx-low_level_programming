#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 *
 * @s1: para
 * @s2: para2
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0, size2 = 0, size1 = 0;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;
	arr = malloc((size1 + size2) * sizeof(char) + 1);
	while (i < (size1 + size2))
	{
		if (i < size1)
			arr[i] = s1[i];
		else if (i >= size1)
			arr[i] = s2[i - size1];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
