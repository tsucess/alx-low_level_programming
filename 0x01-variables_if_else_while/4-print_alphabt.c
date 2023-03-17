#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (Sucess)
*/
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc == 'e')
		{
		continue;
		}
		else if (lc == 'q')
		{
		continue;
		}
		else
		{
		putchar(lc);
		}
	}
		putchar('\n');
	return (0);
}
