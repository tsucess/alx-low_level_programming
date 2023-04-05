#include "main.h"
/**
 * _strlen_recursion - func that print length of string
 * @s: string parameter
 * Return: strings length
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a++;
		a += _strlen_recursion(s + 1);

	}
	return (a);

}
