#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid previously
* @grid: double pointeur used
* @height: height of the array
*
* Return: Always nothing.
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
