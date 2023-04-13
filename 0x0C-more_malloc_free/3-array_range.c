#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates integers array
 * @min: minimum range parameter
 * @max: maximum range parameter
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *arr, a = 0;

	if (min > max)
	{
		return (NULL);
	}
	while (min <= max;)
	{
		arr[a] = min;
		a++;
		min++;
	}
	return (arr);
}
