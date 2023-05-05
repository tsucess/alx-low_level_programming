#include "main.h"

/**
 * print_binary - func that prints the binary equivalent of a decimal number
 * @n: number param to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = n >> a;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
