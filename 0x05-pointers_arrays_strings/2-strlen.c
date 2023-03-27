#include "main.h"
#include <string.h>
/**
 * _strlen - this is a function that returns the length of a string
 * @s: the string parameter
 * Return: integer
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; len != '\0'; len++)
	{
		s++;
	}

	return (len);
}
