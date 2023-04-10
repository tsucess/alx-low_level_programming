#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "100-atoi.c"
/**
 * main - Entry point prints the minimum number of coins
 * to change for an amount of money in cent
 * @argc: count parameter
 * @argv: array parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, calc;
	int coins_array[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	calc = 0;

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	b = 0;

	while (b < 5 && a >= 0)
	{
		while (a >= coins_array[b])
		{
			calc++;
			a -= coins_array[b];
		}
		b++;
	}
	printf("%d\n", calc);
	return (0);
}
