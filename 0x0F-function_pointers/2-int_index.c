#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array parameter
 * @size: size of the array to search from
 * @cmp: compare function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}
	return (-1);
}
