#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -> Entry point.
 *
 * @grid: grid to free.
 * @height: columns of string.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int x;
	int *ptr;

	for (x = 0; x < height; x++)
	{
		ptr = grid[x];
		free(ptr);
	}
	free(grid);
}
