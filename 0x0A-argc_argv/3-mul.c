#include <stdio.h>
/**
 * main - Entry point Program that prints all arguments one per line
 * @argc: counter parameter
 * @argv: array parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3 || 3)
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
