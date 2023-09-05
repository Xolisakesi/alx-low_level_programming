#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of the grid
 * @height: hight of the grid
 * Return: returns a 2d array (poiner to poiner)
 */
int **alloc_grid(int width, int height)
{
int **grd = NULL;
static int j, i;

if (width <= 0 || height <= 0)
{
return (NULL);
}
grd = (int **)malloc(height * sizeof(int *));
if (grd == NULL)
{
return (NULL);
}
for (; i < height; i++)
{
grd[i] = (int *)malloc(width * sizeof(int));
if (grd[i] == NULL)
{
j = 0;
for (; j < i; j++)
{
free(grd[j]);
}
free(grd);
return (NULL);
}
}
return (grd);
}
