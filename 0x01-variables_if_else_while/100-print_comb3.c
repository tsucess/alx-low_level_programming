#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (Sucess)
*/
int main(void)
{
	int num, a;

	for (num = '0'; num < '9'; num++)
	{
		for (a = num + 1; a <= '9'; a++)
		{
			if (a != num)
			{
			putchar(num);
			putchar(a);
			if (num == '8' && a == '9')
			{
			continue;
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
		putchar('\n');
	return (0);
}
