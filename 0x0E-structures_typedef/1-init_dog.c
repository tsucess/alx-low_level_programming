#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initializes struct dog
 * @d: struct parameter
 * @name: char parameter
 * @age: float parameter
 * @owner: char paremeter
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

}
