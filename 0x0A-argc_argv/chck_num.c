#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))

	{
		if (!isdigit(str[i]))
		{
			return (0);
		}

		i++;
	}
	return (1);
}

