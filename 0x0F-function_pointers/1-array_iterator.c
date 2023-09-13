#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array of functions.
 * @size: array size
 * @action: pointer to used function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (!array || !action)
return;

for (; i < size; i++)
{
action(array[i]);
}
}
