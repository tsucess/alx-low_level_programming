#include <stdio.h>
#include <stdlib>
/**
 * main - program that prints opcodes of main
 * @argc: argument counter parameter
 * @argv: array argument parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", array[a]);
			break;
		}
		printf("%02hhx", array[a]);
	}
	return (0);
}
