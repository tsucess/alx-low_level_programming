#include <stdio.h>
/**
 * main - Program that multiplies two arguments and print a new line
 * @argc: counter parameter
 * @argv: array parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	}
	else
	{
		mul = argv[1] * argv[2];
		printf("%d\n", mul);
	}
	return  (0);
}
