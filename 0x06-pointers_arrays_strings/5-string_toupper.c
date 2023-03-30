#include "main.h"
/**
 * string_toupper - functions that change lower case to upper case
 * @n: pointer
 * Return: character
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
