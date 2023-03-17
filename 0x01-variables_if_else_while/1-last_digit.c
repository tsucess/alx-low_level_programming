#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: 0 (Sucess)
*/
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	d = n / 10;
	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n < 6)
	{
		printf("%d and is less than 6\n", n);
	}
	else
	{
		printf("%d and is 0\n", n);
	}
	return (0);
}
