#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function to concatenate two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a, b, len1, len2;

	a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	if  (s1)
	{
		while (a < len1)
		{
			s3[a] = s1[a];
			a++;
		}
	}
	if (s2)
	{
		while (a < (len1 + len2))
		{
			s3[a] = s2[b];
			a++;
			b++;
		}
	}
	s3[a] = '\0';

	return (s3);
}
