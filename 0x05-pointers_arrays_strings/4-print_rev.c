#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string character
 */
void print_rev(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
		for (i = i; i>= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
