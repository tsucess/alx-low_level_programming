#include "variadic_functions.h"

/**
 * sum_them_all - funtion that summ all it's parameter
 * @n: number of parameter in the function
 * @...: variable number of parameters to sum
 *
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
