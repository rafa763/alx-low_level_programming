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
	arr = (int **)malloc(sizeof(int *) * height);
	if (!arr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
