#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: an array decayed parameter
 */
void print_chessboard(char (*a)[8])
{
	int c = 0;
	int b = 0;

	for (; c < 8; c++)
	{
		for (; b < 8; b++)
			_putchar(a[c][b]);
		_putchar('\n');
	}
}
