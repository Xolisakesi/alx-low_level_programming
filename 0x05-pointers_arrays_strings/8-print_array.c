#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * of intergers
 * @a: pointer to an array
 * @n: number of elements to be prented
 * Return: void nothing
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
}
printf("\n");
}
