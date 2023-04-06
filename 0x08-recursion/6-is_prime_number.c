#include "main.h"
int a_prime(int n, int a);
/**
 * is_prime_number - fuction that identifies a prime number
 * @n: the number parameter
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (a_prime(n, n - 1));

}
/**
 * a_prime - calculates if a number is prime
 * @n: actual number
 * @a: the iterator
 *
 * Return: 1 if number is prime
 */
int a_prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0 && a > 0)
	{
		return (0);
	}
	return (a_prime(n, a - 1));
}
