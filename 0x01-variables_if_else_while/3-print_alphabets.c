#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (Sucess)
*/
int main(void)
{
	char lc, uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	putchar(lc);
	}

	for (uc = 'A' uc <= 'Z'; uc++)
	{
	putchar(uc);
	}
	putchar('\n');
	return (0);
}
