#include "main.h"
/**
 * print_numbers - function that prints numbers 0 - 9
 *
 * Return: void.
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
