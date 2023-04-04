#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: an array decayed parameter
 * Return: Alway 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int c = 0;
	int b = 0;

	while (c < 8)
	{
		while (b < 8)
		{
			_putchar(a[c][b]);
			b++;
		}
		_putchar('\n');
		c++;
	}
}
