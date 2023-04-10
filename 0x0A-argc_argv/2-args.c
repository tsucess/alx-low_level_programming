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
	int a = argc - 1;

	while (a < argv)
	{

	printf("%s\n", argc[a]);
	a++;
	}
	return  (0);
}
