#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees grid
 * Description: a function that frees a previously made grid
 * @grid: the first parameter
 * @height: the second parameter
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
