#include "main.h"
/**
 * _print_rev_recursion - func that print string in reverse recursively
 * @s: the string parameter
 */
void _print_rev_recursion(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	if (s[a])
	{
		_putchar(s[a]);
		_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}
}
