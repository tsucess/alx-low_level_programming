#include "main.h"
/**
 * more_numbers - function that prints 10x numbers 0 - 14
 *
 * Return: void.
 */
void more_numbers(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
		_putchar(i);
		}
	_putchar('\n');
	}
}
