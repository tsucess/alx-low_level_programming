#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns 2 dimensional array
 * @width: colum parameter
 * @height: row parameter
 *
 * Return: 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int arr, a, b;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		arr[a] = (int *) malloc(sizeof(int) * width);
		if (arr[a] == NULL)
		{
			free(arr);
			for (b = 0; b <= a; b++)
			{
				free(arr[b]);
			}
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}
	return (arr);
}
