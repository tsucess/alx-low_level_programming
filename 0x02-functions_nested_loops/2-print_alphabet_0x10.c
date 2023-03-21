#include "main.h"

/**
* main - Entry point
*
* Return: 0 (Sucess)
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}

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
