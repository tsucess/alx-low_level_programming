#include "main.h"
/**
 * _isupper - function to print alphabet in uppercase
 * @c: the character
 * Return: 1 if letter is uppercase, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
