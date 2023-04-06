#include "main.h"
int a_sqrt_recursion(int n, int a);
/**
 * _sqrt_recursion - function that return the square root of a number
 * @n: the actual number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (a_sqrt_recursion(n, 0));
}
/**
 * a_sqrt_recursion - recurses to find the natural
 * @n: number to calculate the sqaure root of
 * @a: increment iterator
 * Return: square root of number
 */


int a_sqrt_recursion(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (a_sqrt_recursion(n, a + 1));
}
