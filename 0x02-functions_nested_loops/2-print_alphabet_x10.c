#include "main.h"

/**
* print_alphabet_x10 - function to print 'a' - 'z'x10 by nest loop Entry point
*
* Return: 0 (Sucess)
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char lc;

		for (lc = 'a'; lc <= 'z'; lc++)
		{
		_putchar(lc);
		}
		_putchar('\n');
	}
}
