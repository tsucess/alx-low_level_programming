#include <stdio.h>
#include "100-atoi.c"
/**
 * main - Program that multiplies two arguments and print a new line
 * @argc: counter parameter
 * @argv: array parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int mul;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);

		mul = a * b;
		printf("%d\n", mul);
	}
	return  (0);
}
