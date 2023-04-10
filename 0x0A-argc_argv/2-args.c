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
	int a = 0;

	while (a < argc)
	{

	printf("%s\n", argv[a]);
	a++;
	}
	return  (0);
}
