#include "main.h"
/**
 * _strncpy - fucntion to copy a string
 * @dest: destination character
 * @src: soure character
 * @n: number of chaacter to copy
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
