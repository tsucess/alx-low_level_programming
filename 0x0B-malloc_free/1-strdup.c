#include <stdlib.h>
#include "main.h"
/**
 * @_strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: string parameter
 *
 * Return: pointer to a new memory
 */
char *_strdup(char * str)
{
	char *dup;
	unsigned int a, len;

	a = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	while ((dup[a] = str[a]) != '\0')
	{
		a++;
	}
	return (dup);
}
