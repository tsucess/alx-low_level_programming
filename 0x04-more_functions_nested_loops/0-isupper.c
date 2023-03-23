#include "main.h"
/**
 * print uppercase - function to print alphabet in uppercase
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
