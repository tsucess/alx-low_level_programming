#include <stdlib.h>
#include "main.h"
/**
 * count_word - function that counts a number of works in a string
 * @s: string parameter to count
 * Return: number of words
 */
int count_word(char *s)
{
	int a, b, word;

	a = 0;
	word =0;

	for (b = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
		{
			a = 0;
		}
		else if (a == 0)
		{
			a = 1;
			word++;
		}
	}
	return (word);
}
