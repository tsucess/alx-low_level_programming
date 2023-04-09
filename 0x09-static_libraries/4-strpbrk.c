#include "main.h"
/**
 * _strpbrk - a function that searches a string of any bytes
 * @s: string characters
 * @accept: string to find
 * Return: the pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
