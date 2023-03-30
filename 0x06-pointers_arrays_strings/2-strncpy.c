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

	while (src[len] != '\0')
	{
		if (len == n)
		{
			break;
		}
		dest[len] = src[len];
		len++;
	}
	return (dest);
}
