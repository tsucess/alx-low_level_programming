#include <stdlib.h>
#include "dog.h"
#include "strcpy.c"
/**
 * new_dog - function that creates a new dog
 * @name: name parameter
 * @age: dog age parameter
 * @owner: owner parameter
 *
 * Return: new dog pointer or Null;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lent1, lent2;

	lent1 = _strlen(name);
	lent2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (lent1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lent2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
