#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * of intergers
 * @a: input array
 * @n: number of elements of the array
 * Return: void nothing
 */
void reverse_array(int *a, int n)
{
static int temp, i;

for (; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
