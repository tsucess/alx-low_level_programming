#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the destination memory
 * @src: the source memory
 * @n: the number of byte
 * Return: the copied memory with number of bytes modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		n--;
	}

	return (dest);
}
