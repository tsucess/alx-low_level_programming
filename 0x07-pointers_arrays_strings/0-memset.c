#include "main.h"
/**
 * _memset -function that fills a block of memory with a particular value
 * @s: the address memory to be filled
 * @b: the value to be filled in the address memory
 * @n: the number of bytes to be modified
 * Return: the array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > a)
	{
		s[a] = b;
		n--;
		a++;
	}
	return (s);

}
