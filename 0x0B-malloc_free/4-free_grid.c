#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2D grid
 * @grid: double pointer to array
 * @height: array column
 * Return: NULL if size = 0, pointer to array if successful
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
