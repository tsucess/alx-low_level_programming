#include <stdlib.h>
#include "main.h"
/**
 * argstostr - function that concatenates all arguments together
 * @ac: argc counter parameter
 * @av: argv vector parameter
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, lent;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			lent++;
		}
		lent++;
	}

	str = malloc(sizeof(char) * (lent - 1));

	if (str == NULL)
	{
		return (NULL);
	}

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
