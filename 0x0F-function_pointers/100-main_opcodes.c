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
	int bytes, a = 0;
	char *arr;

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
	arr = (char *)main;
	while (a < bytes)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx ", arr[a]);
		a++;
	}
	return (0);
}
