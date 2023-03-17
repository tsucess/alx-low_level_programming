#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (Sucess)
*/
int main(void)
{
	int num, a, b;

	for (num = '0'; num < '9'; num++)
	{
		for (a = num + 1; a <= '9'; a++)
		{
			for (b = a + 1; b <= '9'; b++)
			{

			if ((a != num) != b)
			{
			putchar(num);
			putchar(a);
			putchar(b);
			if (num == '7' && a == '8')
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
	}
		putchar('\n');
	return (0);
}
