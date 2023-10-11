#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create 2d array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (!arr)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);

		if (!arr[i])
		{
			for (j = 0; j < i; j++)
				free(arr[j]);

			free(arr);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
