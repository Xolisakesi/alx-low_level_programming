#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: pointer to interger type
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
int diagonal1_sum = 0;
int diagonal2_sum = 0;
int i;

for (i = 0; i < size; i++)
{
diagonal1_sum += a[i * size + i];
diagonal2_sum += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", diagonal1_sum, diagonal2_sum);
}
