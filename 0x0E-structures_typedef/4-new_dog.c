#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function name
 *
 * @name: is para
 * @age: is para
 * @owner:is para
 * Return: dog_t*
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
