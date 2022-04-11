#include "dog.h"

/**
 * init_dog - function
 *
 * @d: para
 * @name: para
 * @age: para
 * @owner: para
 *
 * Return: no return
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
