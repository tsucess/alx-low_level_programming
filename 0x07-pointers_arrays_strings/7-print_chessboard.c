#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: an array decayed parameter
 * Return: Alway 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int a = 0;
	int b = 0;

	while (a < 8)
	{
		while (b < 8)
		{
			_putchar(a[a][b]);
			_putchar('\n');
			b++;
		}
		a++;
	}
}
