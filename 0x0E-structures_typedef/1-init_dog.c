#include "dog.h"

/**
 * init_dog - function
 *
 * @d: is para
 * @name: is para
 * @age: is para 3
 * @owner: is para 4
 * 
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}