#include "main.h"
/**
 * _strchr - function that finds a character in a string
 * @s: the string
 * @c: the character to locate
 * Return: pointer to the first occurence of the character in the string
 */
char *_strchr(char *s, char c)
{
	int a;

	while (s[a] != '\0')
	{
		if (s[a] ==  c)
		{
			return (&s[a]);
		}
		a++;
	}
	return (0);
}
