#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free malloced 2d array
 *
 * @grid: pointer to array
 * @height: array height
 *
 * Retrun: Void
 */
void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}

