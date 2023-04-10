#include <stdio.h>
#include "100-atoi.c"
#include "chck_num.c"
/**
 * main - Program that adds two arguments and print a new line
 * @argc: counter parameter
 * @argv: array parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int sum;

	if (argc < 1)
	{
	printf("0\n");
	}
	else
	{
		while (a >= 1)
		{
			if (check_num(argv[a]))
			{
				b = _atoi(argv[a]);
				sum += b;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			a++;
		}
		printf("%d\n", sum);
	}
	return  (0);
}
