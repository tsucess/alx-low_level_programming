#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory of an array with malloc
 * @nmemb: first memeber parameter
 * @size: byte parameter
 * Return: poointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int a = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	d = malloc(nmemb * size);
	if (d == NULL)
	{
		return (NULL);
	}
	while (a < (nmemb * size))
	{
		d[a] = 0;
		a++;
	}
	return (d);
}
