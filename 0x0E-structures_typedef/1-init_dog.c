#include "main.h"
#include <stdlib.h>
/**
 * init_dog - function that initializes struct dog
 * @d: struct parameter
 * @name: char parameter
 * @age: float parameter
 * @owner: char paremeter
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
