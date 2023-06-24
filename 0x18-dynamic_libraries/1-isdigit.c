#include "main.h"
/**
 * _isdigit - function to check if it is digit
 * @c: the character
 * Return: 1 if character is digt, 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
