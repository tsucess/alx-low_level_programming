#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * @size: number of memory to allocate dynamically
 * @c: char to initialize
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		arr[size] = c;
	}
	return (arr);
}
