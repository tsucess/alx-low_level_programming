#include "main.h"
#include "_putchar.c"
/**
 * print_numbers - function that prints numbers 0 - 9
 *
 * Return: mul.
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
