#include "main.h"
int chck_pal(char *s, int k, int l);
int _strlen_recur(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: actual string
 * Return: 1 if it is palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (chck_pal(s, 0, _strlen_recur(s)));
}
/**
 * _strlen_recur - function that get  the length of a string
 * @s: string to calculate
 *
 * Return: length of the string
 */
int _strlen_recur(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recur(s + 1));
}
/**
 * chck_pal - func that checks the characters recursively for palindrome
 * @s: actual string
 * @k: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int chck_pal(char *s, int k, int l)
{
	if (*(s + k) != *(s + l - 1))
	{
		return (0);
	}
	if (k >= l)
	{
		return (1);
	}
	return (chck_pal(s, k + 1, l - 1));
}
