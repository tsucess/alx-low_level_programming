#include "main.h"

/**
 * _strncat - concatenates two strings with n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of character to be copied
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		if (b == n)
		{
			break;
		}
	}
	dest[a] = '\0';
	return (dest);
}
