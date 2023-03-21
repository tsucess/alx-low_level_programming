#include <string.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch[8] = "_putchar";

	for (i = 0; i <= strlen(ch); i++)
	{
	_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}


