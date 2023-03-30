#include "main.h"
/**
 * reverse_array - function that reverses an arry
 * @a: array variable
 * @n: size of array
 * Return: reverse order array elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
