#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer
 * Description: a function that returns a pointer to a 2D array
 * @width: the first parameter
 * @height: the second paramter
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	grid = malloc(height * sizeof(*grid));

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(**grid));
			if (grid[i] == 0)
			{
				while (--i)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
			for (; j < width; j++)
			{

				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
