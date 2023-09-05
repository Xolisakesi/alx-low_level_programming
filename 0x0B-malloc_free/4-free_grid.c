#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional 
 * grid previously created by your alloc_grid function.
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: void nothing
 */
void free_grid(int **grid, int height)
{
static int i;

if (grid == 0 || height == 0)
return;
for (; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
