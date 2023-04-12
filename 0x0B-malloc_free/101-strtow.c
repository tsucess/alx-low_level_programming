#include <stdlib.h>
#include "main.h"
#include "word_counter.c"
/**
 * strtow - function that splits strings to word
 * @str: string parameter to split
 * Return: number of words
 */
char **strtow(char *str)
{
	char **matrx, *tmp;
	int a, b, c, lent, words, start, end;

	b = 0, lent = 0, c = 0;
	while (*(str + lent))
		lent++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrx = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrx == NULL)
		return (NULL);
	for (a = 0; a <= lent; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				matrx[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
		matrx[b] = NULL;
		return (matrx);
}
