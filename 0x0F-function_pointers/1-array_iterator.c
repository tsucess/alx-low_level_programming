#include "fucntion_pointers.h"
/**
 * array_iterator - function that takes a function as parameter
 * @array: array parameter
 * @size: size of rhe array
 * @action: function parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
