#include "main.h"
/**
 * _strcat - function that concatenate two strings
 * @dest : destination string
 * @src : source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		int c = a + b;

		dest[c] = src[b];
		b++;
	}

	return (dest);
}
