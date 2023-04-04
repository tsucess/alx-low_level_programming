#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: the actual string
 * @needle: the substring characters
 * Return: pointer to the beginnig of the location of substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
