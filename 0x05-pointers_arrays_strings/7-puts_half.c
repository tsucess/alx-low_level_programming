#include "main.h"
/**
 * puts_half - prints half of a string
* @str: string character
* Return: print character
*/
void puts_half(char *str)
{
	int lent = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);

	while  (*str != '\0')
	{
		_putchar(*str);
		str++;

	}
	_putchar('\n');
}
