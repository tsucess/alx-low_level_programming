#include "main.h"
/**
 * _strcmp - function that compare two strings character by character
 * @s1: first string
 * @s2: second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[2])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
