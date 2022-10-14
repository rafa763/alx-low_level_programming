#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return pointer to 2D array
 *
 * @width: array width
 * @height: array height
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * (width + height));
	if (!arr)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * height);
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
