#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array
 * of integers.
 * @min: minimub range of stored values
 * @max: maximum range of stored values
 * Return: pointer to alocated array memory
 */
int *array_range(int min, int max)
{
int *p;
int i, size;

if (min > max)
return (NULL);
size = max - min + 1;
p = malloc(sizeof(int) * size);
if (!p)
return (NULL);
for (i = 0; i < size; i++)
p[i] = min++;
return (p);
}
