#include "main.h"

/**
 * free_grid - Entry point
 *
 * Description: frees a 2 dimensional grid previously created by
 *		your alloc_grid function.
 *
 * @height: height of array
 *
 * @grid: double pointer 2d grid
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

