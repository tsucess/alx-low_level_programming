#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - functions that alloccates memory using malloc
 * @b: parameter for size of bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
