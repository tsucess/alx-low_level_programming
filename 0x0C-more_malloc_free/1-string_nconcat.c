#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function to concatenate two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * @n: amount of bytes
 *
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *news;
	unsigned int len1, len2, a, b;

	len1 = 0, len2 = 0, a = 0, b = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n < len2)
	{
		news = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		news = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (!news)
		return (NULL);
	while (a < len1)
	{
		news[a] = s1[a];
		a++;
	}
	while (n < len2 && a < (len1 + n))
	{
		news[a++] = s2[b++];
	}
	while (n >= len2 && a < (len1 + len2))
	{
		news[a++] = s2[b++];
	}
	news[a] = '\0';
	return (news);
}