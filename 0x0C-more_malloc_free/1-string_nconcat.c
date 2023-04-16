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

	if (n >= len2)
	{
		n = len2;
	}
	news = (char *) malloc(sizeof(char) * (len1 + n + 1));

	if (news == NULL)
		return (NULL);

	while (s1[a] != '\0')
	{
		news[a] = s1[a];
		a++;
	}
	while (b < n && s2[b] != '\0')
	{
		news[a++] = s2[b];
		b++;
	}
	news[a] = '\0';
	return (news);
}
