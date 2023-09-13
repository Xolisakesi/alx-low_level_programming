#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: pointer to an array
 * @size: array size
 * @cmp: pointer to fucntion
 * Return: idx of the first element,-1 if no match or
 * size is zero or less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && cmp)
{
for (; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}

