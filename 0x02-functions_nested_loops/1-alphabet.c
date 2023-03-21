#include "main.h"
/**
* main - check the code
*
* Return: Always  0.
*/
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	_putchar(lc);
	}
	_putchar('\n');
}
